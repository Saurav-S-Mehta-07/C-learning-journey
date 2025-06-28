//symbolic constant 

#include <stdio.h>
# define PI 3.14 //   <<<<--------
# define CH 'A'
 # define NAME "saurav"

int main () {
    // area of circle 
    int r = 5;
    printf("area of circle = %f\n", PI * r * r);

//print name:
    printf("%s\n", NAME);
 
 // print character
 printf("%c", CH);
 
    return 0;
}