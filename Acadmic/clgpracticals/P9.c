//Ques 9. Write a program to check the greatest of three numbers using ternary operator?

#include <stdio.h>
int main() {

int n1, n2, n3;
printf("enter any three numbers : ");
scanf("%d%d%d", &n1, &n2, &n3);

(n1>n2 && n1>n3) ? printf("%d is greater\n", n1): (n2>n3) ? printf("%d is grater", n2): printf("%d is greater", n3);
// int max1, max2;
// max1 = (n1>=n2)?n1:n2;
// max2 = (max1>=n3)?max1:n3;
    return 0;
}
/*output
enter any three numbers : 34
56
74
74 is greater
*/