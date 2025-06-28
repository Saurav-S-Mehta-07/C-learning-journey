// continue statement : skip to next iteration : in below program the 3 will not be  print.

#include<stdio.h>
int main() {
    for(int i = 1; i <= 5; i++){
if (i==3) {
    continue;
}
 printf("%d\n", i);
    }
/////////////////////////////////
 for(int i = 1; i <= 25; i++) {
    if(i%2 == 0) {
        continue;
    }
    printf("%d\n", i);
   }

    return 0;
}