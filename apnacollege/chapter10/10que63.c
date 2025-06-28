/*question 63:
write a program to write all the odd numbers from 1 to n in a file: */
 
 #include <stdio.h>

 int main() {

FILE *fptr;
fptr = fopen("odd.txt", "w");
// the  file name odd.txt doesn't exsits but fter the write mode it automatically created.
int n;
printf("enter n : ");
scanf("%d", &n);

for (int i = 1; i<=n; i++) {
    if ( i % 2 != 0) {
fprintf(fptr, "%d\n", i );
    }
}
fclose(fptr);
    return 0;
 }