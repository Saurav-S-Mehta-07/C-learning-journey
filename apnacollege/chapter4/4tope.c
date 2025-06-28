// float in for loop:
#include <stdio.h>
int main() {
    for(float i = 1.0; i <= 5.0; i++) {
        printf("%f \n ", i);
    }

    //character in for loop:
    for(char j = 'a'; j <= 'z'; j++) {
        printf("%c \n ", j);
    }

   #//infinity loop

  #  // for(int k = 1;  ; k++) { // don't create it because of it our memory full and crash the compiler......
    //     printf("%d \n ", k);
    // }
    return 0;
}