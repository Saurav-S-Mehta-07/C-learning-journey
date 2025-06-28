//Ques 5. Write a program to calculate the area and circumference of circle?
#include <stdio.h>
int main() {

    int r;
    printf("enter radius(r) of circle = ");
    scanf("%d", &r);

   float  A, C,  pi = 3.14;
// Area of circle (A) = pi * radius * radius
A = pi * r * r;
//Circumference of a circle (C) = 2 * pi * radius
C = 2 * pi * r;
     printf("Area of circle = %.2f\nCircumference of circle = %.2f", A,C);
    return 0;
}

/*output -
enter radius(r) of circle = 5
Circumference of circle = 31.400002
*/
