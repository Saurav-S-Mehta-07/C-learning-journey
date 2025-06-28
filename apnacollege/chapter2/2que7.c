/* question 7 :
are the following valid or not? 
a: int a = 8 ^ 8; = valid
b: int x; int y = x; = valid
c: int x, int y = x; = invalid
d: int x, y = x; = invalid
e: char stars = '**'; = invalid
*/

# include<stdio.h>
int main() {
    int a = 8 ^ 8; 
    printf("%d",a );
    return 0;
}