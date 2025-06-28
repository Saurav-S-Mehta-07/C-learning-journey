// binary to decimal
#include<stdio.h>
#include<math.h>
int convertBinary(int n);
int main(){
  int n;
  printf("enter binary number : ");
  scanf("%d",&n);

  printf("this %d binary in decimal is : %d",n,convertBinary(n));

    return 0;
}

int convertBinary(int n){
    int rem, dec=0, i =0;
  while(n!=0){
    rem = n%10;
    dec = dec + rem*pow(2,i);
    i++;
    n=n/10;
  }
  return dec;
}