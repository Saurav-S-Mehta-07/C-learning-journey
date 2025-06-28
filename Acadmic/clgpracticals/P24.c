//Ques 24. Write a program to find the factorial of a given number.

#include <stdio.h>
int main() {

int n;
printf("enter any positive number : ");
scanf("%d", &n);

int fact = 1;
for(int i =  1; i<=n; i++) 
        {
         fact = fact * i;
        }
printf("factorial of %d = %d", n, fact);
   return 0;
}

/*output
enter any number : 5
factorial of 5 = 120
*/