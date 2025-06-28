/*question 33:
factorial of n.*/

#include <stdio.h>

int factorial(int n);

int main() {
    // int n;
    // printf("enter n : ");
    // scanf("%d", &n);
printf("%d", factorial(5));
    return 0;
}
//..recursion function...
int factorial(int n) {
    if (n==0)//n==1
     {
        return 1;
    }
    int factorialNm1 = factorial(n-1);
    int factorialN = factorialNm1 * n;
    return factorialN;
}