//count even or odd numbers.

#include <stdio.h>

int main(){

int array[100];
printf("please enter the elment of array : ");
for(int i = 0; i<5; i++){
    scanf("%d",&array[i]);
}

int even =0, odd = 0;
for(int i = 0; i<5; i++){
    if(array[i]%2==0){
        even++;
    }else{
        odd++;
    }
}
printf("even no: %d\n", even);

printf("odd no: %d\n", odd);


    return 0;
}