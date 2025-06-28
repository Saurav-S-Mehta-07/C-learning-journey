/*question 51:
take a string input from the user using %c */

#include<stdio.h>
int main() {
    char str[100];
    char ch;
    
    int i = 0; // here i for index in string
    while(ch != '\n') {
       scanf("%c", &ch);
       str[i] = ch;
       i++; 
    }
    str[i] = '\0'; // now in this we declared null charcter because here %c and copiler put \0 only on %s. 
    puts(str);

    return 0;
}