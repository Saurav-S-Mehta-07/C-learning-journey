/* Quetion 3 :

write a program to calculate perimeter of rectangle.
take sides, a & b, from the user.

*/

#include<stdio.h>

// perimeter of a rectangle = 2(length + hight)

int main() {
//let length be l, hight be h

int l, h;
printf("enter l");
scanf("%d", &l);

printf("enter h");
scanf("%d", &h);

printf("perimeter of a rectangle = %d \n ", 2 * (l+h));

// if givin length (a) = 2 and hight (b) = 1;

int a, b, P;
a=2, b=1, P=2*(a+b);
printf("Perimeter of a rectangle = %d", P);

return 0;
}