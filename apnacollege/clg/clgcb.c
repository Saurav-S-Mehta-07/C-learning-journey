// 2) character constant -- enclosed within single quote ''
// 3) string constant -- enclosed within double quote ""

#include <stdio.h>
int main() {
    //character constant
    char ch = 'a';
    printf("%c\n", ch);

    char b = 'A';
    printf("%c\n", b);
    
    char name = 'saurav';
    printf("%c\n", name);

    //string constant
    char str[7] = "saurav";
    printf("%s\n", str);

char d[10] = "sachin";
printf("%s\n", d);

    return 0;
}