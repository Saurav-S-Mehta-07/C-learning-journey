// escape squence/execution character :

#include <stdio.h>
int main() {
    printf("hello bca student \n ");

    printf("hello\bbca student \n "); // backspace
    printf("hello \bbca student \n ");
    printf("hello\b bca  \n \n ");

   printf("hello\fbca student \n "); //form feed
   printf("hello \fbca student \n ");
    printf("hello\f bca  \n \n ");
    
    printf("hello\rbca\n ");//carrige return
    printf("hello \rbca\n ");
    printf("hello\r bca\n \n");

    printf("hello\0bca student \n ");//null character
    printf("hello \0bca student \n ");
    printf("hello\0 bca \n \n");

    printf("hello\vbca student \n ");//vertical tab
    printf("hello \vbca student \n ");
    printf("hello\v bca \n \n");

    printf("hello\tbca student \n ");//horizontal tab
    printf("hello \tbca student \n ");
    printf("hello\t bca  \n \n");

    printf("hello\\bca student \n ");//backslash
    printf("hello \\bca student \n ");
    printf("hello\\ bca  \n \n");

    return 0;
}