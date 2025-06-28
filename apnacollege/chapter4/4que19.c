/* question 19:
print all no. 1 to 10 excepy for 6.
*/
#include<stdio.h>
int main() {
    for(int i = 1; i<=10; i++) {
        if(i==6) {
            continue;
        }
        printf("%d\n", i);
    }
    ///////////////////////
    
for (int i = 10; i>=1; i--) {
    if(i==6) {
        continue;
    }
    printf("%d\n ", i);
} 
    return 0;
}