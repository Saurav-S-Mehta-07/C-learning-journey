//Ques 10. Write a program to check the greatest of four numbers using ternary operator?

#include<stdio.h>
int main() {

int a, b, c, d;
printf("enter any four numbers : ");
scanf("%d%d%d%d", &a,&b,&c,&d);

(a>b && a>c && a>d) ? printf("%d is greater", a):(b>c && b>d)? printf("%d is greater", b):
 (c>d)?printf("%d is greater",c):printf("%d is greater",d);
    return 0;
}
/*output
enter any four numbers : 45
55
35
24
55 is greater
*/