// transpose  of matrix

#include <stdio.h>

int main(){

int row, col;
int a[100][100], transpose[100][100];

printf("hey saurav! please enter number of rows and columns for matrix : \n");
scanf("%d%d",&row,&col);

printf("enter elements of 1st matrix : \n");
for(int i = 0; i<row; i++)
{
    printf("enter %d row elements : \n", i+1);
    for(int j = 0; j<col; j++)
    {
        scanf("%d",&a[i][j]);
    }
}



for(int i = 0; i<col; i++)
{
    for(int j = 0; j<row; j++)
    {
        transpose[i][j] = a[j][i];
    }
}

for(int i = 0; i<row; i++)
{
    for(int j = 0; j<col; j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

printf("\n");

printf("transpose of matrix a is : \n");

for(int i = 0; i<col; i++)
{
    for(int j = 0; j<row; j++)
    {
        printf("%d ", transpose[i][j]);
    }
    printf("\n");
}

    return 0;
}