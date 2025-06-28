/*3.WAP to create a function isPrime to find that the number is prime or not.
*/
#include<stdio.h>

void isPrime(int n);

int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    isPrime(n);
 return 0;
}

void isPrime(int n){
    int flag = 0;

     if(n<=1){
            flag = 1;
        }
    else{
         for(int i = 2; i<n; i++)
            {
              if(n%i==0)
                {
                  flag = 1;
                  break;
                }
            }
        }
    if(flag == 1)
    {
        printf("not a prime number \n");
    }else{
        printf("It is a prime number \n");
    }
}

/*
enter number : 2
It is a prime number

enter number : 9
not a prime number
*/