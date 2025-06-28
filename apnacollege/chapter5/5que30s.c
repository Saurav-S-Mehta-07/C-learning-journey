/* question 30.
write fuction to calculate area of square , a circle, & a rectangle*/

#include <stdio.h>
void printsquare(int side);
void printcircle(float r);
void printrectangle(int a, int b);

int main() {
int side, r, a, b;
printf(" \n enter side of square :");
scanf("%d", &side);
printf("\n enter a :");
scanf("%d", &a);
printf(" \n enter b : ");
scanf("%d", &b);
printf(" \n enter r :");
scanf("%d", &r);
 
 printsquare(side);
 printcircle(r);
 printrectangle(a,b);
    return 0;
}
void printsquare(int side) {
    printf("area of square : %d\n", side * side);
}
void printcircle(float r) {
    printf(" area of a circle : %f\n", 3.14 * r * r);
}
void printrectangle(int a, int b) {
    printf(" area of a rectangel : %d", a * b);
}


