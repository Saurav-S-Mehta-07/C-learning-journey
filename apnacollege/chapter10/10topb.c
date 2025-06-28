// reading from a file;;;;
//read text(apple) and read number ( 123 , 124 , 143):

#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("test1.txt", "r");
    
    char ch;
    //a
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
//p
 fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
//p
     fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
//l
     fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);
//e
     fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);

    fclose(fptr);
    return 0;

}