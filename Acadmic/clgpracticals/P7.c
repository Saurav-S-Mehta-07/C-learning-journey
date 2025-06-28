//Ques 7. Write a program to check the address of integer float char and double?

#include <stdio.h>

int main() {
    // Declare variables of different types
    int a;
    float f;
    char ch;
    double d;

    printf("enter an integer : ");
    scanf("%d",a);
    printf("enter an integer : ");
    scanf("%f",f);
    printf("enter an integer : ");
    scanf("%c",ch);
    printf("enter an integer : ");
    scanf("%lf",d);

    // Print the addresses of the variables
    printf("Address of int :   %p\n", &a);
    printf("Address of float : %p\n", &f);
    printf("Address of char:   %p\n", &ch);
    printf("Address of double: %p\n", &d);

    return 0;
}
/*output
Address of int :   0061FF1C
Address of float : 0061FF18
Address of char:   0061FF17
Address of double: 0061FF08
*/