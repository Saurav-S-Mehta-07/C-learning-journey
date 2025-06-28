//chapter 10: File input/output

//file opening modes

#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Newtest.txt", "r");
    if(fptr == NULL) {
        printf("file doesn't exist ");
    }
     else {
        fclose(fptr);
    }
    return 0;
}
