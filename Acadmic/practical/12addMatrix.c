/* 12.	WAP to perform addition of two matrices.*/

#include<stdio.h>
int main()
{
    int a[50][50], b[50][50], result[50][50], i, j, r1, r2, c1, c2;

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

if(r1==r2 && c1==c2)
{
    for(i = 0; i<r1; i++)
    {
        for(j = 0; j<c1; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

   printf("\n1st matrix : \n");
   for(i = 0; i<r1; i++)
   {
     for(j = 0; j<c1; j++)
     {
        printf("%d ",a[i][j]);
     }
    printf("\n");
   }

   printf("\n");
   printf("2nd matrix : \n");
   for(i = 0; i<r2; i++)
     {
      for(j = 0; j<c2; j++)
      {
        printf("%d ",b[i][j]);
      }
      printf("\n");
     }

   printf("\n");
   printf("addition of matrix is :  \n");
   for(i = 0; i<r1; i++)
    {
     for(j = 0; j<c1; j++)
     {
        printf("%d ",result[i][j]);
     }
     printf("\n");
    }

}
else{
    printf("addition of matrix is not possible");
}
    return 0;
}

/*
enter number of rows and columns of 1st matrix : 
3
3
enter number of rows and columns of 2nd matrix :
3
3
enter elements of 1st matrix :
enter elements of 1 row :
1
2
3
enter elements of 2 row :
4
5
6
enter elements of 3 row :
7
8
9
enter elements of 2nd matrix :
enter elements of 1 row :
10
11
12
enter elements of 2 row :
13
14
15
enter elements of 3 row :
16
17
18

1st matrix :
1 2 3
4 5 6
7 8 9

2nd matrix :
10 11 12
13 14 15
16 17 18

addition of matrix is :
11 13 15
17 19 21
23 25 27
*/