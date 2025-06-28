//Ques 27. Write a program to find the sum of the digits of a number.

#include<stdio.h>
int main() {

int n;

printf("enter digit : ");
scanf("%d", &n);

int rem, sum = 0;
while(n!=0) {
   rem = n % 10;
   sum =  sum + rem;
   n =  n/10;
}
printf("sum of digit = %d \n", sum);
   return 0;
}

//enter digit : 12345
//sum of digit = 15