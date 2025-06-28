/*question 36
write a function to print n terms of the fibonacci sequence*/
#include <stdio.h>

int fib(int n);

int main() {
    int n = 7;
    for(int i =1; i<=n; i++){
   printf("%d\t", fib (i));
    }
    return 0;
}

int fib(int n) {
        if(n==1) {
            return 0;
        }
        if(n==2){
            return 1;
        }
    
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
   // printf("fib of %d is : %d\n", n,fibN);
    return fibN;
}