/*question 48:
create a Strin firstname and lastname to store details of 
user & print all the characters using a loop.*/
#include<stdio.h>

void printstring(char arr[]);

int main() {
   char firstname[] = "saurav";
    char lastname[] = "mehta";

printstring(firstname);
printstring(lastname);
    return 0;
}
void printstring(char arr[]) {
    for (int i =0; arr[i] != '\0'  ; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}