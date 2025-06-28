// if-else:
#include<stdio.h>
int main () {
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    if(age > 18 ) {
        // combination of statements (chunk) called : block.
        // if there are only single statement than the currly brackets are not compulsory...........
                printf("adult \n ");
printf("they can vote \n ");
printf("they can drive \n ");
    }
    // else is not compulsory........
    else { 
        printf("not adult \n");
    printf("they can not vote and drive also \n ");
    }
    // this thank you print in both case because there is no if nor else......
    printf("thank you \n ");
 return 0;
}