// standard library function
// 3: strcat(firstStr, secStr) : concatenates first string with second string

#include<stdio.h>
#include<string.h>
int main() {
    char firstStr[100] = "Hello";
    char secStr[] = "world";
    strcat(firstStr, secStr);
    puts(firstStr);
    return 0;
}