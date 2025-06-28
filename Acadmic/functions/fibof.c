#include<stdio.h>
void fib(int n);
int main(){

int n;
printf("enter number : ");
scanf("%d",&n);

fib(n);

    return 0;
}
void fib(int n){
      int t1 = 0, t2 = 1, nextTerm;
      printf("fibonacci series  : %d\t%d\t", t1, t2);

     for(int i = 3; i<=n; i++){
    
         nextTerm = t1+t2;
         t1 = t2;
         t2 = nextTerm;
        printf("%d\t", nextTerm);
      }
}