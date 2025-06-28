// string function... gets(str), puts(str), fgets(str);

// it is use when we have to print more words....and because scanf() cannot input multiwords.
#include<stdio.h>
int main() {
 char name[50];

 //gets(name);    // gets( )--> dangerous and ourdated .....
 fgets(name, 100, stdin);
 puts(name);

    return 0;
}