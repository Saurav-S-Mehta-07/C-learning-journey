//size of data type : int, short, long, char, float, double, long double......
// qualifier : size and
#include<stdio.h>
int main() {
    printf("size of int is : %u bytes \n", sizeof(int));
     printf("size of short is : %u bytes \n", sizeof(short));
      printf("size of long is : %u bytes \n", sizeof(long));
       printf("size of char is : %u bytes \n", sizeof(char));
        printf("size of float is : %u bytes \n", sizeof(float));
         printf("size of double is : %u bytes \n", sizeof(double));
          printf("size of long double is : %u bytes \n", sizeof(long double));

    return 0;
}