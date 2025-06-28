/*question 21:
print the factorial of a no. n.
*/
#include<stdio.h>
int main() {
    int n;
printf("enter number : ");
scanf("%d", &n);
int factorial = 1;
    for(int i=1; i<=n; i++) {
factorial = factorial * i;
    }
            printf(" final factorial is : %d\n", factorial);
    return 0;
}