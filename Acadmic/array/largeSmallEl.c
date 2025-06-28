//largest number and smallest number in an array.

#include<stdio.h>

int main(){

int a[5] = {1,2,3,4,5};
int small,large;
small = large = a[0];
for(int i = 0; i<5; i++){
    if(a[i]<small){
        small = a[i];
    }
    if(a[i]>large){
        large = a[i];
    }
}
 printf("large : %d small %d", large, small);

    return 0;
}