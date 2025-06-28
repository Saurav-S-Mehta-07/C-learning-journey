/*question 60:
make a structure to store Bank Account Information of a customer of ABC 
bank. Also make an alias for it .*/

#include <stdio.h>

typedef struct BankAccount {
    int accountNo;
    char name[100];
}acc;
int main() {
acc acc1 = {123, "saurav"};
acc acc2 = { 124 , "priyanshu"};
    acc acc3 = {125, "nayan"};

    printf("acc no = %d\n", acc1.accountNo);
    printf("name = %s", acc1.name);
    return 0;
}