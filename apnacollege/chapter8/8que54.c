/*question 54:
write a function to count the occurrence of vowels in string.*/

#include<stdio.h>
#include<string.h>
int  countvowels(char str[]);

int main() {
char Str[] = "helloworld";
printf("number of vowels are : %d", countvowels(Str));
    return 0;
}

int countvowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
   
        count++;
}
    }
    return count;
}