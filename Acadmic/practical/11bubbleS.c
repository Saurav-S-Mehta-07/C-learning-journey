/*11.	WAP for Bubble Sort.*/

#include<stdio.h>

int main(){

int a[50];

int size;
printf("enter size of array : ");
scanf("%d",&size);

int i,j;
printf("enter elements of array : \n");
for(i = 0; i<size; i++)
{
    scanf("%d",&a[i]);
}

printf("array is : \n");
for(i = 0; i<size; i++)
{
    printf("%d ",a[i]);
}

for(i = 0; i<size; i++)
{
    for(j = 0; j<size - i - 1; j++)
    {
      if(a[j]>a[j+1])
      {
        int temp;
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
}

printf("\nsorted array : \n");
for(i = 0; i<size; i++)
{
    printf("%d ",a[i]);
}

    return 0;
}

/*
enter size of array : 6
enter elements of array :
12
32
12
56
42
66
array is :
12 32 12 56 42 66
sorted array :
12 12 32 42 56 66
*/