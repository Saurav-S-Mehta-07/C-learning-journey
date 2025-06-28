/*question 55:
check if a given character is present in a string or not */
#include<stdio.h>

/*int*/ void checkChar(char str[], char ch);

int main() {
char str[] = "hello world";
char ch = 's';
checkChar(str, ch);
    return 0;
}
/*int*/ void  checkChar(char str[], char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("character is present!");
            return;
        }
    }
printf("character is NOT present:(");
}
 