//write a program to check whether the no. is odd or even using functions.
#include<stdio.h>
void check(int);
int main(){
int num;
printf("enter any number : ");
scanf("%d", &num);
check(num);

    return 0;
}
void check(int n) 
{
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

#include<stdio.h>
void is_even(int num){
    if(num%2==0){
        printf("Even");
    }
   else{
    printf("odd");
   }
}
int main(){
    int n;
    printf("enter any number  : ");
    scanf("%d",&n);
    is_even(n);
    return 0;
}