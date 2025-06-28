/*Question 12 :
write a program to find if a character entered by user is upper case or not
*/
# include<stdio.h>
int main() {
    char ch;
    printf("enter character : \n ");
    scanf("%c", &ch);
if (ch >= 'A'  && ch <= 'Z') {
printf("uper case\n");
} 
else if (ch >= 'a' && ch <= 'z') {
    printf("lower case\n");
}
else {
    printf("not english letter \n ");
}
//ch >= 97 == ch >= 'a'/*ascy value*/
    return 0;
}