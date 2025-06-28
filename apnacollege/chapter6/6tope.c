// pointer in function call

#include<stdio.h>

void square(int n);
void _square(int *n);

int main() {

int number = 4;
square (number);
printf("number = %d\n", number);

_square(&number);
printf("number = %d\n", number);

    return 0;
}

//call by value:

void square(int n) {
    n = n*n;
    printf("square = %d\n", n);
}
//call by refrence
    void _square(int *n) {
    *n = (*n) * (*n); //4*4
    printf("_square = %d\n", *n);
    }
