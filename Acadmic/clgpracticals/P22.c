/* Ques 22. Write a program to print the following star pattern.

*
* *
* * *
* * * * 

  */

#include<stdio.h>
int main() {

for(int i = 1; i<=4; i++) 
     {
      for(int j= 1; j<=i; j++) 
            {
               printf("* ");
            }
          printf("\n");  
     }

   return 0;
}