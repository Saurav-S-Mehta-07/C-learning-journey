/* question 9:
write a program to check if a student passed or failed
marks <= 30 
marks > 30 .*/
#include<stdio.h>
int main() {
    int marks;
   printf("enter marks (0-100) : ");
   scanf("%d", &marks);

   if (marks <= 30) {
     printf("fail\n");
   }
   else if(marks > 30 && marks <= 100) {
    printf("pass\n");
   }
   else {
    printf("wrong");
   }

//by using ternary:......

marks <= 30 ? printf("fail") : printf("pass");
       return 0;
}