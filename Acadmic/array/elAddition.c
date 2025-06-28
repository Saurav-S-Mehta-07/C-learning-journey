// addition of elments of array of different size....

#include<stdio.h>

int sum(int print[], int n);

int main(){

int a[5] = {1,2,3,4,5};
int b[8] = {1,2,3,4,5,6,7,8};
int c[10] = {1,2,3,4,5,6,7,8,9,10};

printf("%d \n", sum(a,5));
printf("%d \n", sum(b,8));
printf("%d \n", sum(c,10));

    return 0;
}

int sum(int print[],int n ){
    int sum =0;
    for(int i = 0; i<n; i++){
        sum+=print[i];
    }
    return sum;
}