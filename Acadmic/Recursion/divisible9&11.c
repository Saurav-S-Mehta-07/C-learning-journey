// number divisible by 9 and 11 using recursion.
// return 1 if divisible by 9 else 0 
#include<stdio.h>

int isDivisibleBy9(int n);
int isDivisibleBy11(int n);


int main(){


int num;
printf("enter number ; ");
scanf("%d", &num);

printf("%d",isDivisibleBy11(num));
    return 0;
}

int isDivisibleBy9(int  n){
   int sumOfDigits = 0;
   if(n==9){
    return 1;
   }
   if(n<9){
    return 0;
   }
   while(n>0){
    sumOfDigits = sumOfDigits + n%10;
    n = n/10;
   }
   return isDivisibleBy9(sumOfDigits);
}

int isDivisibleBy11(int n){
    int s1 = 0, s2 =0, diff;
    if(n==0){
        return 1;
    }
    if(n<10){
        return 0;
    }
    while(n>0){
        s1+=n%10;
        n/=10;
        s2+=n%10;
        n/=10;
    }
    diff = s1>s2?(s1-s2):(s2-s1);
    return isDivisibleBy11(diff);
}