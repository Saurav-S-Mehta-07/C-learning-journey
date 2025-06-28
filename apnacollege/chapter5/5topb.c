// passing  arguments
//sum 
#include <stdio.h>

int sum(int a, int b);
int main() {
    int a, b;
    printf("enter first number : ");
    scanf("%d", &a);

     printf("enter second number : ");
    scanf("%d", &b);
    
    int s = sum(a,b);
// int sum = a + b;
printf("sum is : %d", s);
    return 0;
}

int sum(int x, int y) {
    return x + y;
}