/* question 21:
print the factorialof a number n. */
#include<stdio.h>
int main() {
    for(int i = 5; i  <= 50; i++) {
        if(i%2==0) {
            continue;
        }
        printf("%d\n", i);
    }
///////////////////////////////////////////////////////////////////////
      for(int i = 5; i  <= 50; i++) {
        if(i%2!=0) {
        printf("%d\n", i);
    }
    }
    return 0;
}