//Ques 11. Write a program to print ASCII value of a character.

#include<stdio.h>
int main() {

char ch;
printf("enter any character : ");
scanf("%c", &ch);

printf("ASCII Value of character (%c) is = %d", ch,ch);

    return 0;
}
/*output
enter any character : a
ASCII Value of character (a) is = 97
enter any character : #
ASCII Value of character (#) is = 35
enter any character : A
ASCII Value of character (A) is = 65
*/