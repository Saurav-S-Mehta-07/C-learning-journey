/*16.	WAP to create a structure named Student and its five subject marks,
 calculate the average marks and display the details of only those students 
 who scores highest marks.*/

#include<stdio.h>

struct student{
    char name[20];
    int marks[5];
    float avg;
};

int main(){

struct student std[20];
     
    int n,i,j,sum =0;
    printf("enter number of student : ");
    scanf("%d",&n);

    for(i = 0; i<n; i++){
        printf("enter deatails of student %d \n", i+1);
        printf("enter name of student %d: ",i+1);
        scanf("%s",&std[i].name);
        printf("enter marks of 5 subjects : \n");
        for(j = 0; j<5; j++)
        {
            scanf("%d",&std[i].marks[j]);
            sum = sum + std[i].marks[j];
        }
        std[i].avg = sum/5.0;
    } 

    for(i = 0; i<n; i++)
    {
        printf("%s\n",std[i].name);
        for(j = 0; j<5; j++)
        {
            printf("sub %d = %d\n",j+1, std[i].marks[j]);
        }
        printf("average of marks = %.2f\n",std[i].avg);
    }

    return 0;
}

/*
enter number of student : 2
enter deatails of student 1
enter name of student 1: Saurav
enter marks of 5 subjects :
100
99
98
100
100
enter deatails of student 2
enter name of student 2: Mayank
enter marks of 5 subjects :
100
88
98  
90
100
Saurav
sub 1 = 100
sub 2 = 99
sub 3 = 98
sub 4 = 100
sub 5 = 100
average of marks = 99.40
Mayank
sub 1 = 100
sub 2 = 88
sub 3 = 98
sub 4 = 90
sub 5 = 100
average of marks = 194.60
*/