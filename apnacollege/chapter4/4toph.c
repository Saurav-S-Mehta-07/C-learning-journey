// break statement:

#include <stdio.h>
int main() {
    for(int i = 1; i <= 5; i++) {
        if (i == 3) {
            break; //now we are out of the loop and the below line don't readable by compiler and print end 
           }  
            printf("%d\n", i);
    }
    printf("end");

    return 0;
}