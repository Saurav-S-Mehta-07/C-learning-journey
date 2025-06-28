// Logical operators
/* 1: && (and)
2: || (or)
3: ! (not) 
*/
#include<stdio.h>
int main() {
     printf("a: %d\n ", 4>3 && 5<7);
       printf("b: %d\n ", 4>3 && 9<7);
         printf("c: %d\n ", 2>3 && 8<7);
           printf("d; %d\n ", 4>3 || 5<7);
             printf("e: %d\n ", 4>3 || 9<7);
               printf("f: %d\n ", 4>6 || 9<7);
                 printf("g: %d\n ", ! (4>9) && !(5<7));
                   printf("h: %d\n ", !(4>9) && ! (9<7));
  printf("i: %d\n ", ! (4>9) || !(5<7));
                   printf("j: %d\n ", !(4>9) || ! (9<7));     
                     printf("k: %d\n ", ! (4>9) );
                   printf("l: %d\n ",! (9<7));   
                     printf("m: %d\n ",! (6<7));             
    
    return 0;
}