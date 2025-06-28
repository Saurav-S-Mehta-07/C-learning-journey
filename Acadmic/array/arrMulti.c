// matrix multiplication 

#include<stdio.h>


int main(){

int i,j,k,r1,r2,c2,c1,sum = 0;

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



//multiplication

if(c1==r2)
{
    for(i = 0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k = 0; k<c2; k++)
            {
                sum = sum + a[i][k]*b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
printf("multipliction of matrices is : ");
    for(i = 0; i<r1; i++)
    {
        for(j = 0; j<c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
else 
{
    printf("multiplication of matrices are not possible");
}

    return 0;
}