// standard library function:
// 4.. strcmp(firststr, secstr);
#include<stdio.h>
#include<string.h>
int main() {
    char firstStr[] = "apple";
    char secStr[] = "banana";

    printf("%d\t", strcmp(firstStr, secStr));
printf("%d\n", strcmp(secStr, firstStr));


      char fStr[] = "HHHA";
    char sStr[] = "HHHB";
    printf("%d\t", strcmp(fStr, sStr));
printf("%d\n", strcmp(sStr, fStr));
    return 0;
}