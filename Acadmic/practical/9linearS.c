/*9.WAP for Linear Search */
#include <stdio.h>

int main(){

int a[50];

int n, flag = 0;
printf("enter size of array :  ");
scanf("%d",&n);

printf("enter array elements: \n");
for(int i = 0; i<n; i++)
{
    scanf("%d",&a[i]);
}

int num;
printf("enter number that you want to search : ");
scanf("%d",&num);

for(int i = 0; i<n; i++)
{
    if(a[i]==num)
    {
        printf("found at position %d",i+1);
        flag = 1;
        break;
    }
}

if(flag == 0)
{
    printf("not found");
}
    return 0;
}

/*
enter size of array :  7
enter array elements:
22
11
23
53
12
67
43
enter number that you want to search : 43
found at position 7
*/