// pointer to structures
#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {

struct student s1 = {"100rav", 110, 10.0};
printf("name : %s\n roll : %d\n cgpa : %f\n", s1.name, s1.roll, s1.cgpa);

struct student *ptr = &s1;
printf("roll no. : %d\n", (*ptr).roll);

//arrow operator 
//we can use arrow operator also instead of (*ptr).roll
printf("\nroll no. : %d\n", ptr->roll);
printf("student name : %s\n", ptr->name);
printf("cgpa : %f\n", ptr->cgpa);

 printf("%d", ptr); //ptr    ... &s1 adress

    return 0;
}