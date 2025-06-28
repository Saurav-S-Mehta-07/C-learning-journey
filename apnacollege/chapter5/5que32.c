/*question 32:
sum of first n natural numbers.*/ //by recursion function 
#include <stdio.h>
int sum(int n);
int main() {
    int n; 
    printf("enter n : ");
    scanf("%d", &n);
   
   printf("sum is : %d", sum(n));
    return 0;
}

//recursion function
int sum(int n) {
    //base case (1)
    if (n==1) {
        return 1;
    }
    int sumNm1 = sum(n-1); //sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}