//library management system

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[100];
};

void addBook();
void displayBooks();
void searchBook();
void deleteBook();

int main() {
    int choice;

    do {
        printf("\n=== Library Management System ===\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Delete Book by ID\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while(choice != 5);

    return 0;
}

void addBook() {
    struct Book b;
    FILE *fp = fopen("library.dat", "ab");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter book ID: ");
    scanf("%d", &b.id);
    getchar(); // clear newline
    printf("Enter title: ");
    fgets(b.title, sizeof(b.title), stdin);
    b.title[strcspn(b.title, "\n")] = '\0'; // remove newline
    printf("Enter author: ");
    fgets(b.author, sizeof(b.author), stdin);
    b.author[strcspn(b.author, "\n")] = '\0';

    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);
    printf("Book added successfully.\n");
}

void displayBooks() {
    struct Book b;
    FILE *fp = fopen("library.dat", "rb");
    if (fp == NULL) {
        printf("No books found.\n");
        return;
    }

    printf("\n--- Book List ---\n");
    while (fread(&b, sizeof(b), 1, fp)) {
        printf("ID: %d | Title: %s | Author: %s\n", b.id, b.title, b.author);
    }
    fclose(fp);
}

void searchBook() {
    int id, found = 0;
    struct Book b;
    FILE *fp = fopen("library.dat", "rb");
    if (fp == NULL) {
        printf("No books found.\n");
        return;
    }

    printf("Enter book ID to search: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(b), 1, fp)) {
        if (b.id == id) {
            printf("Book found: ID: %d | Title: %s | Author: %s\n", b.id, b.title, b.author);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found.\n");

    fclose(fp);
}

void deleteBook() {
    int id, found = 0;
    struct Book b;
    FILE *fp = fopen("library.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL || temp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter book ID to delete: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(b), 1, fp)) {
        if (b.id == id) {
            found = 1;
            printf("Book with ID %d deleted.\n", id);
            continue; // skip writing to temp
        }
        fwrite(&b, sizeof(b), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("library.dat");
    rename("temp.dat", "library.dat");

    if (!found)
        printf("Book not found.\n");
}
