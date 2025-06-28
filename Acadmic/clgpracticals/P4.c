//Ques 4. Write a program to calculate the area of rectangle?
#include<stdio.h>
int main() {
int l,b,A;
printf("enter length of a rectangle = ");
scanf("%d", &l);
printf("enter breadth of a rectangle = ");
scanf("%d", &b);

//area of rectangle (A) = length * breadth
A = l * b;

printf("Area of rectangle (A) = %d", A);
    return 0;
}

/*output-
enter length of a rectangle = 10
enter breadth of a rectangle = 5
Area of rectangle (A) = 50
*/