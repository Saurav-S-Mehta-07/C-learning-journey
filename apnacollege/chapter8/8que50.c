/*question 50;
make a program that input user's name & prints its length*/

#include<stdio.h>

int Length(char arr[]);

int main() {

char name[100]; //only firstname
fgets(name, 100, stdin);
puts(name);
printf("length is : %d", Length(name));

    return 0;
}
int  Length(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
count++;
    }
return count-1; //because if only count is involves null character too '\0'.... that why count - 1;
}