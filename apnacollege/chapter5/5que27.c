/* question 27:
write 2 functions- ont to print "hello" & second to print "good bye".*/

#include<stdio.h>

//declaration/prototype
void printhello();
void printgoodbye();

int main() {

// function call
printhello();
 printgoodbye();

    return 0;
}

//function definition
void printhello() {
    printf("hello!\n");
}
void printgoodbye() {
    printf("good bye!\n");
}