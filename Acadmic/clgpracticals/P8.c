//Ques 8. Write a program to check the size of integer float char and double?
#include <stdio.h>
int main() {

printf("size of integer = %u bytes \n ", sizeof(int));
printf("size of float   = %u bytes \n ", sizeof(float));
printf("size of char    = %u bytes \n ", sizeof(char));
printf("size of double  = %u bytes \n ", sizeof(double));

    return 0;
}

/*output
size of integer = 4 bytes 
 size of float   = 4 bytes 
 size of char    = 1 bytes
 size of double  = 8 bytes*/