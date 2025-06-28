/* question 30.
write fuction to calculate area of square , a circle, & a rectangle*/

#include <stdio.h>

float squarearea(float side);
float circlearea(float radius);
float rectangle (float l, float b);

int main() {
float side, radius, l, b;
printf(" \n enter side of square :");
scanf("%f", &side);
printf(" \n enter radius :");
scanf("%f", &radius);
printf("\n enter l :");
scanf("%f", &l);
printf(" \n enter b : ");
scanf("%f", &b);

printf("area of square : %f\n", squarearea(side));
printf("area of circle : %f\n", circlearea(radius));
printf("area rectangle : %f\n", rectangle (l, b));
    return 0;
}
float squarearea(float side) {
    return side * side;
}
float circlearea(float radius) {
    return 3.14 * radius * radius;
}
float rectangle (float l, float b) {
    return l*b;
}