// input and output in arrays
#include <stdio.h>
int main() {
    int marks[3];

    printf("enter phy : ");
    scanf("%d", &marks[0]);

    printf("enter maths : ");
    scanf("%d", &marks[1]);

    printf("enter chem : ");
    scanf("%d", &marks[2]);

 printf("phy = %d, maths = %d, chem = %d", marks[0], marks[1], marks[2]);
    return 0;
}