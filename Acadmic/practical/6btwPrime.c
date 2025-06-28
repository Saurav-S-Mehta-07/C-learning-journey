/*6.WAP to display all the prime numbers between 1 to 100.*/

#include<stdio.h>

int main()
{
    int n, i, isPrime;

    for(n = 2; n<=100; n++)
    {
        isPrime = 1; 

        if(n<=1)
        {
            isPrime = 0;
        }

        for(i = 2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1)
        {
            printf("%d ",n);
        }
    }
}

/*
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
*/