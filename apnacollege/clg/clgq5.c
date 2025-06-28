/* question 5:
write a program to enter the value int, char, float, double, by user */
#include <stdio.h>
int main() {
    int a; char b; float c; double d;
    printf("enter a,b,c,d");
    scanf("%d%c%f%lf", &a, &b, &c, &d);
    printf(" a=%d, b=%c, c = %f, d = %lf", a,b,c,d);
    return 0;
}