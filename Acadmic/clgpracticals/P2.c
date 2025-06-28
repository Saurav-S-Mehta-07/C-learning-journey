//Ques 2. Write a program to swap two number without using third variable?
#include<stdio.h>
int main() {

int a,b;
printf("enter 1st number(a) = ");
scanf("%d",&a);
printf("enter 2nd number(b) = ");
scanf("%d",&b);
printf("before swaping numbers \n a = %d, b= %d", a, b);

a = a + b;
b = a - b;
a = a - b;

printf("\n after swaping numbers \n a = %d, b= %d", a, b);

    return 0;
}
/* output -
enter 1st number(a) = 69
enter 2nd number(b) = 45
before swaping numbers
 a = 69, b= 45
 after swaping numbers
 a = 45, b= 69
 */