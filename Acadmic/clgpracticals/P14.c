/*ques 14. Write a program to print the grade of a student based on the following condition:

PERCENTAGE	GRADE
85%-100%	    A
70%-85%     	B
55%-70%	      C
40%-55%	      D
Below 40%	    FAIL

Take marks of four subjects from the user.*/

#include <stdio.h>
int main() {

int s1, s2, s3, s4, total;
printf("enter marks of four subjects (0-100): \n");
scanf("%d%d%d%d", &s1,&s2,&s3,&s4);

total = s1 + s2 + s3 + s4;
float percent = total/4;
printf("total merks : %d, \n percentage : %.2f\n", total, percent);

if (percent>85) 
   {
     printf("Grade : A");
   }
else  if (percent>70) 
   {
     printf("Grade : B");
   }
else   if (percent>55) 
   {
     printf("Grade : C");
   }
else  if (percent>40) 
   {
     printf("Grade : D");
   }
else 
   {
     printf("Fail");
   }

    return 0;
}
/*output 
enter marks of four subjects (0-100): 
90
98
87
89
total merks : 364,
 percentage : 91.00
Grade : A

enter marks of four subjects (0-100): 
23
12
11
21
total merks : 67,
 percentage : 16.00
Fail
*/