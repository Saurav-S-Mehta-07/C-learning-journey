// Ques 1. Write a program to swap two number using third variable?  
/*Saurav Singh Mehta
BCA(AI&DS)
ROLL NO: 106*/

#include<stdio.h>
int main() {

int num1, num2, temp;
printf("enter any two numbers : \n");
scanf("%d%d", &num1, &num2);

printf("numbers before swapping \n a = %d, b = %d\n", num1, num2);

temp = num1;
num1 = num2;
num2 = temp;

printf("numbers after swapping \n a = %d, b = %d\n", num1, num2);
   return 0;
}

/* output -
enter 1st number(a) = 45

 enter 2nd number(b) = 76
before swaping numbers
 a = 45, b = 76
after swaping two numbers
 a = 76, b = 45*/