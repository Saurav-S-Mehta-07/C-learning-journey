/*question 56:
write a program to store the data of  3 students*/
#include<stdio.h>
#include<string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100]; 
};

int main() {

struct student s1;
s1.roll = 110;
s1.cgpa = 10.0; 
strcpy(s1.name, "Saurav");
printf("student name = %s\n", s1.name);
printf("student roll no = %d\n", s1.roll);
printf("student cgpa = %f\n", s1.cgpa);

struct student s2;
s2.roll = 95;
s2.cgpa = 09.1; 
strcpy(s2.name, "Priyanshu");
printf("student name = %s\n", s2.name);
printf("student roll no = %d\n", s2.roll);
printf("student cgpa = %f\n", s2.cgpa);

struct student s3;
s3.roll = 68;
s3.cgpa = 08.6; 
strcpy(s3.name, "Mahesh");
printf("student name = %s\n", s3.name);
printf("student roll no = %d\n", s3.roll);
printf("student cgpa = %f\n", s3.cgpa);
    return 0;
}