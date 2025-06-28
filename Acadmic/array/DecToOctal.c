//decimal number to octal number 

#include<stdio.h>

int main(){

int arr[10], num, i,j;

printf("enter decimal number : ");
scanf("%d",&num);

i =0;
while(num!=0){
       arr[i] = num%8;
       num/=8;
       i++;
}
printf("binary : ");

for(j= i - 1; j>=0; j--){
    printf("%d",arr[j]);
}
    return 0;
}