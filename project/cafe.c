//cafe management system

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct MenuItem {
    int id;
    char name[50];
    float price;
} menu[100];  // maximum 100 items

int menuSize = 0;

void loadMenu() {
    FILE *fp = fopen("menu.txt", "r");
    if (fp == NULL) {
        printf("Error: menu.txt not found.\n");
        exit(1);
    }
    while (fscanf(fp, "%d %s %f", &menu[menuSize].id, menu[menuSize].name, &menu[menuSize].price) != EOF) {
        menuSize++;
    }
    fclose(fp);
}

void showMenu() {
    printf("\n--- Menu ---\n");
    for (int i = 0; i < menuSize; i++) {
        printf("%d. %s - Rs. %.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }
}

void takeOrder() {
    int itemId, quantity;
    float total = 0;
    char cont = 'y';

    FILE *bill = fopen("bill.txt", "w");
    if (bill == NULL) {
        printf("Error creating bill file.\n");
        return;
    }

    fprintf(bill, "=== Cafe Bill ===\n");

    do {
        printf("Enter item ID: ");
        scanf("%d", &itemId);
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        int found = 0;
        for (int i = 0; i < menuSize; i++) {
            if (menu[i].id == itemId) {
                float itemTotal = menu[i].price * quantity;
                printf("%s x%d = Rs. %.2f\n", menu[i].name, quantity, itemTotal);
                fprintf(bill, "%s x%d = Rs. %.2f\n", menu[i].name, quantity, itemTotal);
                total += itemTotal;
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Invalid item ID.\n");
        }

        printf("Add more items? (y/n): ");
        scanf(" %c", &cont);
    } while(cont == 'y' || cont == 'Y');

    printf("\n=== BILL ===\n");
    printf("Total amount: Rs. %.2f\n", total);
    fprintf(bill, "-----------------\nTotal: Rs. %.2f\n", total);
    fprintf(bill, "Thank you! Please visit again.\n");

    fclose(bill);

    printf("Bill saved to bill.txt.\n");
}

int main() {
    int choice;

    loadMenu(); // load from file

    do {
        printf("\n=== Cafe Management System ===\n");
        printf("1. Show Menu\n");
        printf("2. Take Order\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: showMenu(); break;
            case 2: takeOrder(); break;
            case 3: printf("Thank you! Visit again.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while(choice != 3);

    return 0;
}
