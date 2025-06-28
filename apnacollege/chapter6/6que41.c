/*question 41:
write a function to calculate the sum, product & average of 
2 numbers. Print that average in the main function.*/

#include<stdio.h>

void calculations(int a, int b, int  *sum, int  *product, int  *average );

int main() {
    int a = 5, b= 4;
int sum, product, average;
calculations(a, b, &sum, &product, &average);
printf("sum = %d, product = %d, average = %d\n", sum, product, average);
    return 0;
}

void calculations(int a, int b, int *sum, int *product, int *average) {
    *sum = a + b;
     *product = a*b;
    *average = (a+b)/2;

}