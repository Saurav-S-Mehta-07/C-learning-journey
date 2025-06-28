/*question 35:
write a function to calculate percentage of a student from marks
in science , math & sanskrit*/
#include <stdio.h>
int calculatepercentage(int s, int m, int sn);
int main() {
    int s = 98;
    int m = 100;
    int sn = 98;
    printf("percentage is : %d", calculatepercentage(s, m, sn));
    return 0;
}

int calculatepercentage(int s, int m, int sn) {
    return ((s+m+sn) / 3);
}