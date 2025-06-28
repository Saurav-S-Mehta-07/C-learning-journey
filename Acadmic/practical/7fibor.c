/*7.WAP to display the Fibonacci series with the help of recursion.*/

#include<stdio.h>

int fibo(int n);

int main()
{
    int n;
    printf("enter number of term : ");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++)
    {
        printf("%d ",fibo(i));
    }

    return 0;
}

int fibo(int n)
{
    if(n==1)
       return 0;
    if(n==2)
       return 1;
    
    int fibNm1 = fibo(n-1);
    int fibNm2 = fibo(n-2);

    int fib = fibNm1+fibNm2;
    return fib;
}

/*
enter number of term : 15
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
*/