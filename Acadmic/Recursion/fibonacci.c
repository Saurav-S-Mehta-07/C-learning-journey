// fibonacci series using recursion

#include<stdio.h>

int fibonacci(int n);

int main(){

int n;
printf("enter number of terms : ");
scanf("%d",&n);

for(int i = 1; i<=n; i++){
    printf("%d\t",fibonacci(i));
}
    return 0;
}

int fibonacci(int n){
         if(n==1){
            return 0;
         }
         if(n==2){
            return 1;
         }

         return (fibonacci(n-1)+fibonacci(n-2));
}