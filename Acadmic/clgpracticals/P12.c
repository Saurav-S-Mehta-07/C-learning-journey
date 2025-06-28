//Ques 12. Write a program to check whether a alphabet is in capital or lower case.

#include<stdio.h>
int main() {

char ch;
printf("enter any alphabet character : ");
scanf("%c", &ch);

 if(ch>='A' && ch<='Z') 
      {
        printf("alphabet is in capital letter");
      }  
 else if (ch>='a' && ch<='z') {
    printf("alphabet is in lower case");
}
else {
    printf("entered character is not a aplphabet character");
}
    return 0;
}
/*output
enter any alphabet character : S
alphabet is in capital letter

enter any alphabet character : q
alphabet is in lower case

enter any alphabet character : @
entered character is not a aplphabet character
*/