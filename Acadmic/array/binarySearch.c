#include <stdio.h>

int main(){

int n; 
printf("enter number : ");
scanf("%d",&n);
int a[]={12,23,34,45,56,67,76};
int low = 0, high = 6;
int mid = (low+high)/2;

while(low<=high)
{
    if(a[mid]==n){
        printf("element found");
        break;
    }
    else if(a[mid]>n){
        high = mid-1;
    }
    else{
        low = mid+1;
    }
    mid = (low+high)/2;
}
if(low>high){
    printf("not found");
}
    return 0;
}