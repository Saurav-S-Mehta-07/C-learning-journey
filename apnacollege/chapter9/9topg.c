// typedef keyword : alias

#include <stdio.h>
#include <string.h>

typedef struct ComputerScienceEngineering {
    char name[10];
int roll;
float cgpa;
} coe;

int main() {
coe s1;
s1.roll = 7;
s1.cgpa = 10;
strcpy(s1.name, "saurav");

printf("name : %s\n roll : %d\n cgpa : %f\n", s1.name,s1.roll,s1.cgpa);
    return 0;
}