//hotel management system

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Guest {
    int roomNo;
    char name[50];
    int days;
    float bill;
};

void checkIn();
void viewGuests();
void checkOut();

int main() {
    int choice;

    do {
        printf("\n=== Hotel Management System ===\n");
        printf("1. Check In Guest\n");
        printf("2. View All Guests\n");
        printf("3. Check Out Guest\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: checkIn(); break;
            case 2: viewGuests(); break;
            case 3: checkOut(); break;
            case 4: printf("Thank you for using the Hotel Management System.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while(choice != 4);

    return 0;
}

void checkIn() {
    struct Guest g;
    FILE *fp = fopen("guests.dat", "ab");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter room number: ");
    scanf("%d", &g.roomNo);
    getchar(); // clear newline
    printf("Enter guest name: ");
    fgets(g.name, sizeof(g.name), stdin);
    g.name[strcspn(g.name, "\n")] = '\0'; // remove newline
    printf("Enter number of days staying: ");
    scanf("%d", &g.days);
    g.bill = g.days * 1000.0;  // simple billing Rs.1000 per day

    fwrite(&g, sizeof(g), 1, fp);
    fclose(fp);

    printf("Guest checked in successfully. Bill amount: Rs. %.2f\n", g.bill);
}

void viewGuests() {
    struct Guest g;
    FILE *fp = fopen("guests.dat", "rb");
    if (fp == NULL) {
        printf("No guests found.\n");
        return;
    }

    printf("\n--- Current Guests ---\n");
    while (fread(&g, sizeof(g), 1, fp)) {
        printf("Room: %d | Name: %s | Days: %d | Bill: Rs. %.2f\n", g.roomNo, g.name, g.days, g.bill);
    }

    fclose(fp);
}

void checkOut() {
    int room, found = 0;
    struct Guest g;
    FILE *fp = fopen("guests.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (fp == NULL || temp == NULL) {
        printf("Error opening files.\n");
        return;
    }

    printf("Enter room number to check out: ");
    scanf("%d", &room);

    while (fread(&g, sizeof(g), 1, fp)) {
        if (g.roomNo == room) {
            found = 1;
            printf("Guest %s checked out from room %d. Total bill: Rs. %.2f\n", g.name, g.roomNo, g.bill);
            continue; // skip writing
        }
        fwrite(&g, sizeof(g), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("guests.dat");
    rename("temp.dat", "guests.dat");

    if (!found)
        printf("Guest with room %d not found.\n", room);
}
