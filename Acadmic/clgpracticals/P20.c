/*Ques 20. Write a program to print the following pattern.
A
B B
C C C
D D D D
*/

#include <stdio.h>
int main() {

 for(char i = 'A'; i<='D'; i++) 
          {
            for(char j = 'A'; j<=i; j++)
                     {
                      printf("%c ", i);
                     }
              printf("\n");
          }

  return 0;
}
