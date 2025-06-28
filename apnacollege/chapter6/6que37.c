/*question 37:
*/
#include<stdio.h>
int main() {
int *ptr;
int x;

ptr = &x;
*ptr = 0; //x=0

printf(" x = %d\n", x);//0
printf("*ptr = %d\n", *ptr);//0

*ptr += 5;//*ptr = *ptr + 5 == *ptr = x + 5 // x+=5 //(x = 5)
printf("x = %d\n", x);//5
printf(" *ptr = %d\n", *ptr);//5

(*ptr)++; // *ptr = *ptr + 1..== x + 1 == 5+1 = 6... x=6
printf(" x = %d\n", x);//6
printf(" *ptr = %d\n", *ptr);//6
return 0;
}