//Ques 17. Write a program to check whether a alphabet is a vowel or not.

#include <stdio.h>
int main() {

char ch; 
printf("enter any alphabet character : ");
scanf("%c", &ch);

if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u'||
  ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    {
        printf("%c is a vowel", ch);
    }
else 
    {
        printf("%c is not a vowel", ch);
    }
    return 0;
}
/*output
enter any alphabet character : U
U is a vowel

enter any alphabet character : g
g is not a vowel

enter any alphabet character : a
a is a vowel
*/