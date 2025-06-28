// chapter 9:   Structures
//syntax

#include<stdio.h>
#include<string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100]; 
   /*if here char defined by pointer then we can 
   write s1.name = "saurav" but here it is array notation.*/ 
};

int main() {

struct student s1;
s1.roll = 110;
s1.cgpa = 10.0;
     //s1.name = "Saurav"; 
strcpy(s1.name, "Saurav");
    /*those string which are defined from array notaton
     these values we can not change 
      we can only copy, compare but we cannot change its value
      by equal to :::
      to no error in s1 we have to define #inclue<string.h> */
printf("student name = %s\n", s1.name);
printf("student roll no = %d\n", s1.roll);
printf("student cgpa = %f\n", s1.cgpa);
    return 0;
}