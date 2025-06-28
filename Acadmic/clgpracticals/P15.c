//Ques 15. Write a program to check whether a given year is a leap year or not.C

#include<stdio.h>
int main() {

int year;
printf("enter year : ");
scanf("%d", &year);

if(year%100 == 0) 
     {
            if(year % 400 == 0)
            {
                printf("%d is a leap year", year);
            }
            else
            {
                printf("%d is not a leap year", year);
            }
     }
else {
           if (year % 4 == 0)
           {
                printf("%d is a leap year", year);
           }
           else 
           {
                 printf("%d is not a leap year", year);
           }
 
     }

    return 0;
}
/*
output
enter year : 1600
1600 is a leap year

enter year : 1900
1900 is not a leap year

enter year : 2024
2024 is a leap year
*/