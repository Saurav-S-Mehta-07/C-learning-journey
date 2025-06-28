//pointer arithemetic 
// case 2::

#include<stdio.h>
int main() {
    float price = 20.00;
    float *ptr = &price;

    printf("%d\n", ptr);
    ptr++;
    printf("%d", ptr);
    return 0;
}