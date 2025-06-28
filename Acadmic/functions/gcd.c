//gcd of numbers using function

#include <stdio.h>
void gcd(int n1, int n2);
int main(){

int n1, n2;
printf("enter n1 and n2 : ");
scanf("%d%d", &n1, &n2);

gcd(n1,n2);
    return 0;
}

void gcd(int n1, int n2){
    int rem;
          while(rem!=0){
                rem = n1%n2;
                n1 = n2;
                n2 = rem;
          }
          printf("gcd = %d", n1);
}