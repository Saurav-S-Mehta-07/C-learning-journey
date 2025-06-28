/* Question 8:
print 1(true) or 0(false) for following statemints:
a: if it's sunday and it's snowing--> true
b: if it's monday or it's raining--> true
c: if a number is greater then 9 & less than 100--> true (hint: 2 digit number) */
#include<stdio.h>
int main() {
    //part a:
    int sun = 1;
    int snow = 1;
    printf("%d", sun && snow);

//part b:
int mon = 1;
int rain = 1;
printf(" \n %d \n ", mon || rain);

//part c:
int x;
printf("enter x");
scanf(" \n %d", &x);
printf("%d", x>9 && x<100);
    return 0;
}