#include<stdio.h>
struct student{
    char name[10];
    int rollno;
    float cgpa;
};
int main(){

struct student std[10];

for(int i = 0; i<10; i++)
{
    printf("enter name, roll number , and cgpa of student %d",i+1);
    scanf("%s %d %f", &std[i].name, &std[i].rollno, &std[i].cgpa);
}

for(int i = 0; i<10; i++)
{
    printf("name = %s, roll no = %d, cgpa = %f \n", std[i].name, std[i].rollno, std[i].cgpa);
}

    return 0; 
}