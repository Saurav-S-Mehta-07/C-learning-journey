//write a program to check whether the no. is Prime or not using function.
#include<stdio.h>
void check(int);
int main(){
   int n;
   printf("enter any number : ");
   scanf("%d", &n);
   check(n);
}
void check(int num){
    int count = 0;
    int i = 1;
    while(i<= num){
        if(num%i==0){
            count++;
        }
        i++;
    }
if(count==2){
    printf("is a Prime number");
} else {
    printf("is not a Prime number");
}
}