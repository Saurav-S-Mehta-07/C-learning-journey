//writing to file

#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("test1.txt", "w");
// fprintf(fptr, "%c", 'M');
// fprintf(fptr, "%c", 'a');
// fprintf(fptr, "%c", 'n');
// fprintf(fptr, "%c", 'g');
// fprintf(fptr, "%c", 'o');

//get
// fptr = fopen("test.txt", "r");
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));
// printf("%c\n", fgetc(fptr));

//put
 fptr = fopen("test.txt", "w");
fputc('M',fptr);
fputc('a',fptr);
fputc('n',fptr);
fputc('g',fptr);
fputc('o',fptr);

 fclose(fptr);
    return 0;
}