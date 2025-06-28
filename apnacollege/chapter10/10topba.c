//reading from a file
// read numbers : 123 124 143
#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("test2.txt", "r");
int a;
     fscanf(fptr, "%d", &a);
    printf("number 1 = %d\n", a);

    
     fscanf(fptr, "%d", &a);
    printf("number2 = %d\n", a);

    
     fscanf(fptr, "%d", &a);
    printf("number3 = %d\n", a);
 
 fclose(fptr);
    return 0;
}