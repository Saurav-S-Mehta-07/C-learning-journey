/*question 46:
write a program to store the first n fibonacci numbers.*/
#include<stdio.h>
 
 int main() {
    int n;
    printf("enter (n>2): ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i < n; i++) {  //1, 2, 3, 5..........
        fib[i] = fib[i-1] + fib[i-2]; //important
        printf("%d \t", fib[i]);
    }

    return 0;
 }