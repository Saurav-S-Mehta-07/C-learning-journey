// array of structure:
#include<stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main() {
    struct student ece[100];
    ece[0].roll = 110;
    ece[0].cgpa = 10.0;
    strcpy(ece[0].name, "saurav");

    printf("name = %s\n roll = %d\n cgpa = %f\n", ece[0].name, ece[0].roll, ece[0].cgpa);
    
    return 0;
}