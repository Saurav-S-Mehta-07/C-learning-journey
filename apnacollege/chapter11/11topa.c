/*chapter 11 : Dynamic memory alocation*/

//malloc()
#include <stdio.h>
#include <stdlib.h>

int main() {
int *ptr;
ptr = (int  *) malloc(5 * sizeof(int));

ptr[0] = 1;
ptr[1] = 3;
ptr[2] = 5;
ptr[3] = 7;
ptr[4] = 9;

for (int i = 0; i<5; i++) {
    printf("%d\n", ptr[i]);
}
    return 0;
}