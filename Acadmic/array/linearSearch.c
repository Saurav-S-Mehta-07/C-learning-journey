//linear search

#include <stdio.h>

int main(){

int n;

int i=0;

int a[100]={1,4,3,2,5,6,4,2,7};

printf("enter number : ");
scanf("%d",&n);

int count = 0, flag = 0;
while(a[i] != 0){
    count++;
    i++;
}
i = 0;
while(i<count)
{
    if(a[i] == n)
    {
        flag = 1; 
        break;
    }
    i++;
}
if(flag == 1)
{
    printf("%d is found at location %d",n,i+1 );
}else{
    printf("%d is not found ");
}
    return 0;
}