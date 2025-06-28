/*question 38:
Swap 2 numbers, a & b.*/

#include <stdio.h>

void swap(int a, int b);
void _swap(int *, int *b);

int main() {

int x = 3, y = 5;
swap( x, y);
printf("x = %d & y = %d\n",x,y);

_swap(&x , &y);
printf("x = %d & y = %d\n", x,y);


    return 0;
}

//call by value : x and y  are not swap by call by value pointer
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d\n", a,b);
}

// call by reference : swap x and y and a & b too
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    printf("*a = %d & *b = %d\n", *a, *b);
}

