/*question 16:
print the table of a number input by the user*/

#include<stdio.h>
int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);

// int i;
// for(i = n; i <= n*10; i = i + n) {
//     printf("%d\n", i);
// }

 //inshot method:
 int i;
for(i = 1; i <= 10; i++) {
    printf("%d\n", n*i);
}
    return 0;
}