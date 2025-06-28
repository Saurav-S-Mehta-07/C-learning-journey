/* question 4: 
how to take input from user....
write a program to enter two values from the user and find sum and average of two number.
*/
#include<stdio.h>
int main() {
    int a, b; //int a, b, sum;
   printf("enter a and b : \n ");
    scanf("%d%d", &a, &b);
    printf("sum is : %d\n average is : %d", a+b, (a+b)/2);// sum = a+b
     
    return 0;
}