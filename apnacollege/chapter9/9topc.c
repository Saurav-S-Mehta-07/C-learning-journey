// Initializing Structures

#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {110, 10.0, "saurav s mehta"}; // structure variable in single line 
    printf("roll = %d\n cgpa = %f\n name = %s", s1.roll, s1.cgpa, s1.name);
}