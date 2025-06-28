//program to find out the factorial of a number using function;
#include<stdio.h>
int find_fact(int n);
int main(){
int num,factorial;
printf("enter any number : ");
scanf("%d", &num);
factorial =find_fact(num);
printf("factorial of %d = %d",num,factorial);
    return 0;
}
int find_fact(int n){
    int i;
    int fact=1;
for(i=1; i<=n; i++){
    fact= fact*i;
  }
  return fact;
}