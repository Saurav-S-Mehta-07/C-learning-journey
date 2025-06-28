#include<stdio.h>
int fact(int n, int a){
    if(n==1){
        return a;
    }
    return fact(n-1,n*a);
}
int main()
{
   int n;
   printf("enter number: ");
   scanf("%d", &n);
   printf("factorial of %d is %d",n,fact(n,1));
   return 0;
}