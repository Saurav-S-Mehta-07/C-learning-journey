/* question 17:
keep taking numbers as input from user until user enters an odd number.*/

#include<stdio.h>
int main() {
    int n;
  do {
    printf("enter a number : ");
    scanf("%d", &n);
    printf("%d\n", n);
if (n%2 != 0) {
    break;
}
 }
 while(1); 
 printf("thank you");
    return 0;
}