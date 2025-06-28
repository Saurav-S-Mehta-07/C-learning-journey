//pointer arithemetic
//case 3::

#include <stdio.h>
int main() {

    char star = '*';
    char *ptr = &star;
     printf("%d\n", ptr);
     ptr++;
     printf("%d", ptr);
    return 0;

}