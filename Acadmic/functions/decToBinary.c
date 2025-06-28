// decimal to binary:
#include<stdio.h>
int printBinary(int n);
int main(){
int n = 3;
printf("%d",printBinary(n));
    return 0;
}
int printBinary(int n){
    int rem,rev = 0, a = 1;
    while(n!=0){
        rem = n%2;
        rev = rev+rem*a;
        n = n/2;
        a = a*10;
    }
    return rev;
}