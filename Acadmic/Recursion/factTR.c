/*factorial of a number using tail recursion*/

#include<stdio.h>

int fact(int n, int a){

    if(n==0){
        return a;
    }
    return fact(n-1,n*a);
}

int main(){

int n;
printf("enter number please : ");
scanf("%d",&n);


printf("fact = %d",fact(n,1));
    return 0;
}