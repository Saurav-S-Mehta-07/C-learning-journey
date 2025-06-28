/*question 61 : 
make a program to read 5 integers from a file*/

#include <stdio.h>

int main() {
FILE *fptr;
fptr = fopen("test.txt", "r");
int n;
fscanf(fptr, "%d", &n);
printf("number = %d\n",n);

fscanf(fptr, "%d", &n);
printf("number = %d\n",n);

fscanf(fptr, "%d", &n);
printf("number = %d\n",n);

fscanf(fptr, "%d", &n);
printf("number = %d\n",n);

fscanf(fptr, "%d", &n);
printf("number = %d\n",n);

fclose(fptr);
    return 0;
}