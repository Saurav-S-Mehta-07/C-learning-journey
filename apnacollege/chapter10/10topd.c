//EOF (End Of File):
#include <stdio.h>

int main() {

FILE *fptr;
fptr = fopen("test3.txt", "r");
char ch;
ch = fgetc(fptr);
while(ch != EOF) {
    printf("%c", ch);
    ch = fgetc(fptr);
}
fclose(fptr);
    return 0;
}