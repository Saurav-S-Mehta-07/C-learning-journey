// addition of matrix ;

#include<stdio.h>

int main(){

int i,j,r1,r2,c2,c1;

int a[100][100],b[100][100],result[100][100];



printf("enter number of rows and columns of 1st matrix : \n");
scanf("%d%d",&r1,&c1);

printf("enter elements of 1st  matrix : \n");
for(i = 0; i<r1; i++)
{
    printf("enter %d row : \n",i+1);
    for(j=0; j<c1; j++)
    {
        scanf("%d",&a[i][j]);
    }
}


printf("enter number of rows and columns of 2nd matrix : \n");
scanf("%d%d", &r2, &c2);

printf("enter elements of 2nd matrix : \n");
for(i = 0; i<r2; i++)
{
    printf("enter %d row : \n",i+1);
    for(j=0; j<c2; j++)
    {
        scanf("%d",&b[i][j]);
    }
}

 for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
printf("\n");
for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

if(r1==r2&&c1==c2)
{
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("sum of two matrices is : \n");
     for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}else{
    printf("additon of matrices is not possible\n");
}
    return 0;
}