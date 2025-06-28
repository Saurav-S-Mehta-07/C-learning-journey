/*13.	WAP to perform multiplication of two matrices.*/

#include<stdio.h>
int main()
{
    int a[50][50], b[50][50], result[50][50], i, j, k, r1, r2, c1, c2, sum = 0;

    printf("enter number of rows and columns of 1st matrix : \n");
    scanf("%d%d",&r1,&c1);

    printf("enter number of rows and columns of 2nd matrix : \n");
    scanf("%d%d",&r2,&c2);

    printf("enter elements of 1st matrix : \n");
    for(i = 0; i<r1; i++)
    {
        printf("enter elements of %d row : \n",i+1);
        for(j = 0; j<c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter elements of 2nd matrix : \n");
    for(i = 0; i<r2; i++) 
    {
        printf("enter elements of %d row : \n",i+1);
        for(j = 0; j<c2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
if(c1 == r2)
{
   for(i = 0; i<r1; i++)
   {
    for(j = 0; j<c2; j++)
    {
        for(k = 0; k<c2; k++)
        {
            sum = sum + a[i][k]*b[k][j];
        }
        result[i][j] = sum;
        sum = 0;
    }
   }

   printf("multiplication of matrices : \n");
   for(i = 0; i<r1; i++)
   {
    for(j = 0; j<c2; j++)
    {
        printf("%d ", result[i][j]);
    }
    printf("\n");
   }
}
else{
    printf("multiplication of matrix is not possible");
}
return 0;
}

/*
enter number of rows and columns of 1st matrix : 
3
2
enter number of rows and columns of 2nd matrix :
2
3
enter elements of 1st matrix :
enter elements of 1 row :
12
11
enter elements of 2 row :
14
12
enter elements of 3 row :
12
14
enter elements of 2nd matrix :
enter elements of 1 row :
13
13
11
enter elements of 2 row :
15
13
15
multiplication of matrices :
321 299 297
362 338 334
366 338 342
*/