//2.WAP to find the sum of all elements of an array.

#include <stdio.h>
int main(){

int arr[50];
int n;
printf("enter size of array: ");
scanf("%d",&n);
printf("enter elements of array : \n");
for(int i = 0; i<n; i++)
{
    scanf("%d",&arr[i]);
}
int sum = 0;
for(int i = 0; i<n; i++)
{
   sum = sum + arr[i];
}
printf("sum of array elements is : %d",sum);
    return 0;
}
/*
enter size of array: 5
enter elements of array :
1
2
3
4
5
sum of array elements is : 15
*/