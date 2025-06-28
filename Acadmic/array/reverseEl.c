// reversing an array element;

#include<stdio.h>

int main(){

int i,j,temp,arr[5]={1,2,3,4,5};

for(i = 0, j=4; i<j; i++,j--){
         temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
}

for(i = 0 ; i<5; i++){
    printf("%d ", arr[i]);
}

    return 0;
}