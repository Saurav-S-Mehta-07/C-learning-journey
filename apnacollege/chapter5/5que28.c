/* question 28
write a function that print "Namste" if user is indian & "Banjour" if the user is french. */

#include<stdio.h>

void printindian();
void printfrench();

int main() {
 
 printf("enter i for indian and f for french : ");
 char ch;
 scanf("%c", &ch);
 if (ch == 'i') {
    printindian();
 } else {
    printfrench();
 }
    return 0;
}

void printindian() {
    printf("Namste\n");
}
void printfrench(){
    printf("Banjour\n");
}