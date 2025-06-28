/* Quetion 2 :

 Write a program to calculate area of a circle
(radius is given)

*/


#include<stdio.h>

// area of a circle = pi * radius * radius.

int main(){
    // let radius of circle = r
float r;
//( the above float is used for the decimal numbers ) like ex: pi = 3.14
printf("enter r");
scanf("%f", &r);
printf("area of circle = %f \n ", 3.14 * r * r);


// let a another circle c2 of radius a = 3.

float a, area;
a = 3, area = 3.14 * a * a;
printf("area of circle c2 = %f", area);
    return 0;
}