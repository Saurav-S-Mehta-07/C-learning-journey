/*14.	WAP to perform transpose of a matrix.*/

#include<stdio.h>

int main(){

int a[50][50], transpose[50][50], i, j, row, col;

printf("enter number of rows and columns of matrix : \n");
scanf("%d%d",&row, &col);

printf("enter elements of matrix (a) : \n");
for(i = 0; i<row; i++)
{   
    printf("enter elements of %d row : \n", i+1);
    for(j = 0; j<col; j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("matrix a : \n");
for(i = 0; i<row; i++)
{
    for(j = 0; j<col; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
printf("\ntranspose of matrix (a) : \n");
for(i = 0; i<col; i++)
{
    for(j = 0; j<row; j++)
    {
        transpose[i][j] = a[j][i];
    }
}

for(i = 0; i<col; i++)
{
    for(j = 0; j<row; j++)
    {
        printf("%d ",transpose[i][j]);
    }
    printf("\n");
}

    return 0;
}

/*
enter number of rows and columns of matrix :
3
3
enter elements of matrix (a) :
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
matrix a :
1 2 3
4 5 6
7 8 9

transpose of matrix (a) :
1 4 7
2 5 8
3 6 9
*/