//standard library function

// 1. strlen(str) : count number of characters excluding '\0' null character.
#include<stdio.h>
#include<string.h>

int Length(char arr[]);

int main() {

char name[100] = "saurav";
// int length = strlen(name);
// printf("length is : %d", Length);
printf("length is : %u", strlen(name)); 

    return 0;
}
int  Length(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
count++;
    }
return count-1; //because if only count is involves null character too '\0'.... that why count - 1;
}