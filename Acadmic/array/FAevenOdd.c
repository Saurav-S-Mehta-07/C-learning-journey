//check odd event array elements:

#include<stdio.h>

void check(int n);

int main(){

int arr[10], i;
printf("enter element : ");
for(i=0; i<10; i++){
    scanf("%d",&arr[i]);
    check(arr[i]);
}

    return 0;
}

void check(int n){
    if(n%2==0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
}