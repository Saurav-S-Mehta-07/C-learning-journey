//Ques 13. Write a program to return bigger number between two numbers using conditional statements.

#include <stdio.h>
int main() {

int num1, num2, biggerNumber;
printf("enter any two numbers : ");
scanf("%d%d", &num1, &num2);

biggerNumber = (num1>num2)? num1 : num2;

printf("two numbers are %d and %d and the bigger number is %d", num1, num2, biggerNumber);
    return 0;
}
/*output
enter any two numbers : 34
56
two numbers are 34 and 56 and the bigger number is 56
*/