/* question 13 : 
print the number from 0 to 10
0 1 2 3 4 5 6 7 8 9 10 */
 
 #include<stdio.h>
 int main() {
    // i = i + 1; == i += 1 == i++
    for (int i = 0; i <= 10 ; i = i++) {
        printf("%d\n", i );
    }
    return 0;
 }
