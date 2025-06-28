/*8.WAP to find the factorial of a no. using recursion.*/

#include <stdio.h>

int factorial(int n);

int main(){

int n;
printf("enter number : ");
scanf("%d",&n);

printf("factorial of %d \n %d! = %d",n,n,factorial(n));

    return 0;
}

int factorial(int n){
    if(n==0|| n == 1)
       return 1;
    
    return (n*factorial(n-1));
}

/*
enter number : 5
factorial of 5
 5! = 120
*/