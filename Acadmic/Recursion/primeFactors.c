//prime factorization ;;;; recursion;

#include<stdio.h>

void primeFact(int n);

int main() {

int n = 84;

 primeFact(n);

    return 0;
}

void primeFact(int n){
          int i = 2;
          if(n == 1)
            return;
          
          while(n%i!=0){
            i++;
          }


        printf("%d",i);
        primeFact(n/i);
}