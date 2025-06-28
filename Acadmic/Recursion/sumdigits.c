// sum of digits ; 

#include <stdio.h>

int sum(int n);

int main(){

int n=12345;

printf("\b=%d",sum(n));

    return 0;
}

int sum(int n){
    int s;
       if(n/10==0){
        printf("%d+",n);
        return n;
       }

     s = (n%10) + sum(n/10);
     printf("%d+",n%10);
     return s;
}