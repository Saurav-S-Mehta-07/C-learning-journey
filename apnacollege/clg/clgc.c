//constant:

// 1) numeric constant: i) interger  --> 
#include <stdio.h>
int main() {
   
    int a=5;  // i..a) decimal integer (base 10)--(0 to 9)
    printf("%d\n\n", a);

    int b = 05; // i..b) octal integer (base 8) -- (0 to 7)
    printf("%d\n\n", b);

    int c = 0x5; // i..c) hexadecimal integer (base 16 ) -- (0 to 9  A to F)
     printf("%d\n\n", c);
int d = 0xB;
printf("%d\n", d);
    return 0;
}