//Ques 16. Write a program to check whether a no. is negative or not.
#include<stdio.h>
int main() {

int num;
printf("enter any number : ");
scanf("%d", &num);

if (num<0) 
    {
        printf("%d is a negative number",num);
    }
else
    {
        printf("%d is not a negative number",num);
    }
    return 0;
}
/*output
enter any number : -7
-7 is a negative number

enter any number : 0
0 is not a negative number

enter any number : 9
9 is not a negative number
*/