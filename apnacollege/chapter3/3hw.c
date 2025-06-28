/* write a program to check if the given no. is a naural number 
naural no. : 1, 2, 3, 4.........*/
#include<stdio.h>
int main() {
    int number;
    printf("enter number : \n ");
    scanf("%d", &number);

    if (number > 0) {
        printf("it is a naural number \n ");
    }
    else {
        printf("it is not a natural number \n ");
    }

number > 0 ? printf("\n natural number \n " ) : printf("not a naural number \n ");
    return 0;
}