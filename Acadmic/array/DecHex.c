//decimal number to Hexadecimal number 

#include<stdio.h>

int main(){

int arr[10], num, i,j;

printf("enter decimal number : ");
scanf("%d",&num);

i =0;
while(num!=0){
       arr[i] = num%16;
       num/=16;
       i++;
}
printf("binary : ");

for(j= i - 1; j>=0; j--){
    if(arr[j]<10){
    printf("%d",arr[j]);
    }else{
        printf("%c",arr[j] -10 + 'A');
    }
}
    return 0;
}