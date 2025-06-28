/* Quetion 10 :
write a program to give grade to a student :
marks < 30 is C
30 <= marks <= 70 is B
70 <= marks <= 90 is A
90 <= marks <= 100 is A+
*/
#include<stdio.h>
int main() {
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);

    if (marks < 30) {
        printf("grade C \n");
    }
    else if (marks >= 30 && marks < 70) {
        printf("grade B \n");
    }
    else if(marks >= 70 && marks < 90) {
        printf("grade A \n");
    }
    else {
        printf("grade A+ \n");
    }
    return 0;
}