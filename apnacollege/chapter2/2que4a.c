// Relational oprators:
/* 1: == (equal to)
2: >, >=
3: <, <=
4: !=(not equal to)
*/
# include<stdio.h>
int main() {
    // true : 1, false: 0;
    
    printf("a: %d \n ", 4 == 4);
    printf("b: %d \n ", 4 == 5);
    printf("c: %d \n ", 4 != 4);
    printf("d: %d \n ", 4 != 5);
    printf("e: %d \n ", 4 < 7);
    printf("f: %d \n ", 4 <= 4);
    printf("g: %d \n ", 4 >= 4);
    printf("h: %d \n ", 4 < 4);
    printf("i: %d \n ", 4 > 4);
    printf("j: %d \n ", 4 > 3);
    printf("k: %d \n ", 4 <= 5);
    printf("l: %d \n ", 4 <= 3);
    printf("m: %d \n ", 4 >=3 );
    printf("n: %d \n ", 4 >= 5 );
    return 0;
}