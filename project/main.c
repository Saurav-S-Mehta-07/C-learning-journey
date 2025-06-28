#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 100

typedef struct {
    int accNo;
    char fname[30];
    char lname[30];
    float balance;
} Customer; 

Customer customers[MAX_CUSTOMERS];
int customerCount = 0;

int generateAccountNumber() {
    if (customerCount == 0)
        return 10001;
    return customers[customerCount - 1].accNo + 1;
}

void registerCustomer() {
    if (customerCount >= MAX_CUSTOMERS) {
        printf("Customer limit reached.\n");
        return;
    }

    Customer newCustomer;
    printf("Enter first name: ");
    scanf("%s", newCustomer.fname);
    printf("Enter last name: ");
    scanf("%s", newCustomer.lname);

    newCustomer.accNo = generateAccountNumber();
    newCustomer.balance = 0.0;

    customers[customerCount++] = newCustomer;
    printf("Account created! Your account number is: %d\n", newCustomer.accNo);
}

void showCustomerDetails(Customer c) {
    printf("Account Number: %d\n", c.accNo);
    printf("Name: %s %s\n", c.fname, c.lname);
    printf("Balance: %.2f\n", c.balance);
}

int findCustomerByAccNo(int accNo) {
    for (int i = 0; i < customerCount; i++) {
        if (customers[i].accNo == accNo)
            return i;
    }
    return -1;
}

void customerMenu(Customer *cust) {
    int choice;
    do {
        printf("\n-- Customer Menu --\n");
        printf("1. View Account Details\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("0. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                showCustomerDetails(*cust);
                break;
            case 2: {
                float amount;
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                cust->balance += amount;
                printf("Deposited %.2f successfully!\n", amount);
                break;
            }
            case 3: {
                float amount;
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > cust->balance)
                    printf("Insufficient balance!\n");
                else {
                    cust->balance -= amount;
                    printf("Withdrew %.2f successfully!\n", amount);
                }
                break;
            }
        }
    } while (choice != 0);
}

void customerLogin() {
    int accNo;
    printf("Enter your account number: ");
    scanf("%d", &accNo);
    int index = findCustomerByAccNo(accNo);
    if (index != -1) {
        printf("Welcome %s %s!\n", customers[index].fname, customers[index].lname);
        customerMenu(&customers[index]);
    } else {
        printf("Account not found!\n");
    }
}

void managerMenu() {
    int choice;
    do {
        printf("\n-- Manager Menu --\n");
        printf("1. View All Customers\n");
        printf("2. Search Customer by Account Number\n");
        printf("3. Customers with Balance Below Amount\n");
        printf("4. Customer with Highest Balance\n");
        printf("5. Customer with Lowest Balance\n");
        printf("0. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for (int i = 0; i < customerCount; i++)
                    showCustomerDetails(customers[i]);
                break;
            case 2: {
                int acc;
                printf("Enter account number: ");
                scanf("%d", &acc);
                int i = findCustomerByAccNo(acc);
                if (i != -1)
                    showCustomerDetails(customers[i]);
                else
                    printf("Account not found.\n");
                break;
            }
            case 3: {
                float amt;
                printf("Enter amount: ");
                scanf("%f", &amt);
                for (int i = 0; i < customerCount; i++) {
                    if (customers[i].balance < amt)
                        showCustomerDetails(customers[i]);
                }
                break;
            }
            case 4: {
                if (customerCount == 0) {
                    printf("No customers available.\n");
                    break;
                }
                int maxIndex = 0;
                for (int i = 1; i < customerCount; i++) {
                    if (customers[i].balance > customers[maxIndex].balance)
                        maxIndex = i;
                }
                printf("Customer with Highest Balance:\n");
                showCustomerDetails(customers[maxIndex]);
                break;
            }
            case 5: {
                if (customerCount == 0) {
                    printf("No customers available.\n");
                    break;
                }
                int minIndex = 0;
                for (int i = 1; i < customerCount; i++) {
                    if (customers[i].balance < customers[minIndex].balance)
                        minIndex = i;
                }
                printf("Customer with Lowest Balance:\n");
                showCustomerDetails(customers[minIndex]);
                break;
            }
        }
    } while (choice != 0);
}

void managerLogin() {
    char username[20], password[20];
    printf("Enter manager username: ");
    scanf("%s", username);
    printf("Enter manager password: ");
    scanf("%s", password);

    if ((strcmp(username, "admin") == 0) && (strcmp(password, "admin123") == 0)) {
        printf("Login successful!\n");
        managerMenu();
    } else {
        printf("Invalid credentials!\n");
    }
}

int main() {
    int choice;
    do {
        printf("\n--- Bank Management System ---\n");
        printf("1. Manager Login\n");
        printf("2. Existing Customer Login\n");
        printf("3. New Customer Registration\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                managerLogin();
                break;
            case 2:
                customerLogin();
                break;
            case 3:
                registerCustomer();
                break;
            case 0:
                printf("Thank you for using our banking system!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
