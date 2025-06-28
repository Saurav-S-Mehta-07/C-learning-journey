// Exponentiation of a float by a positive integer;;

#include <stdio.h>

float power(float a, int n);

int main(){
  float a;
  int n;

    printf("enter a and n: ");
    scanf("%f%d",&a, &n);

    printf("%f raised to the power %d is : %f",a,n,power(a,n));


    return 0;
}

float power(float a, int n){
    if(n==0){
        return 1;
    }
    return (a*power(a,n-1));
}