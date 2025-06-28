//fibonacci series using recursion 

#include<stdio.h>
int fib(int n);
int main(){
 int n;
 printf("enter number : ");
 scanf("%d",&n);
for(int i=1; i<=n; i++){
 printf("%d\t", fib(i));
}
    return 0;
}
int fib(int n){
    if(n==0)
        { return 0;}
    if(n==1)
       { return 0;}
    
    if(n==2)
        {return 1;}
    else
       { return (fib(n-1) + fib(n-2));}
}
