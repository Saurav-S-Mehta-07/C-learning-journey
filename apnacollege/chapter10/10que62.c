/*question 62: 
make a program to input student information 
from a user & enter it to a file.*/
#include <stdio.h>

int main() {
FILE *fptr;
fptr = fopen("student.txt", "w"); // the file gere studen.txt doesn't exists but the mode w create it/
char name[100];
int age;
float cgpa;
printf("enter name : ");
scanf("%s", &name);
printf("enter age: ");
scanf("%d", &age);
printf("enter cgpa : ");
scanf("%f", &cgpa);

fprintf(fptr, "%s,\t",name);
fprintf(fptr, "%d,\t", age);
fprintf(fptr, "%f",cgpa);
fclose(fptr);
    return 0;
}