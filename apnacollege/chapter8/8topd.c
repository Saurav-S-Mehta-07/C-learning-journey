//string using pointers

#include<stdio.h>
int main() {
    char *canchange = " Hello World";
    puts(canchange);
    canchange = "Hello"; // reinitialized
    puts(canchange);

    char cannotchange[] = "hello world";
    puts(cannotchange);
    // cannotchange = "hello";  //cannot reinitialized..
    // puts(cannotchange);
    return 0;
}