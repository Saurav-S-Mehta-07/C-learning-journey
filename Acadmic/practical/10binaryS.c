/*10.	WAP for Binary Search*/
#include<stdio.h>

int main(){
    //prerequested array should  be sorted.

    int a[50];

    int size;
    printf("enter size of array : ");
    scanf("%d",&size);

    int i;
    printf("enter a sorted array : \n");
    for(i = 0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("array is : \n");
    for(i = 0; i<size; i++)
    {
        printf("%d ",a[i]);
    }

    int num;
    printf("\nenter element that you want to search in array :");
    scanf("%d",&num);

    int low = 0;
    int high = size - 1;
    int mid = (low+high)/2;

    while(low<=high)
    {
        if(a[mid]==num)
        {
            printf("found at posotion %d",mid+1);
            break;
        }
        else if(a[mid]>num)
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        mid = (low+high)/2;
    }
    if(low>high)
    {
        printf("searched element not found");
    }
    return 0;
}

/*
enter size of array : 5
enter a sorted array : 12
23
45
67
89
array is :
12 23 45 67 89
 enter element that you want to search in array :89
found at posotion 5
*/