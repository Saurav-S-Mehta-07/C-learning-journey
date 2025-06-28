// passing structure to fuction

#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};
//function declaration
void printInfo(struct student s1);

int main() {

struct student s1 = {"Saurav Singh Mehta", 7, 10.00};
printInfo(s1);

    return 0;
}
//function definition
void printInfo(struct student s1) {
    printf("student information \n \t");
    printf("student name : %s\n\t", s1.name);
    printf("student rollno. : %d\n\t", s1.roll);
    printf("student cgpa : %f\n", s1.cgpa);

}