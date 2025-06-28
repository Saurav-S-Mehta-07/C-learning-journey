/* question 8a:
write a program to print the average of three numbers.*/

#include<stdio.h>
int main() {
    // let the three no. is a, b, c.
    int a, b, c;
  
    printf("enter a");
    scanf("%d", &a);
      printf("enter b");
    scanf("%d", &b);
      printf("enter c");
    scanf("%d", &c);

    
     printf("average = %d", (a+b+c)/2);
    return 0;
}