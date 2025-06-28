 // else-if:
 #include<stdio.h>
 int main() {
int Age;
printf("enter Age:");
scanf("%d", &Age);

 if(Age >= 18 ) {
    printf(" \n adult \n");
 }
 else if(Age >= 13 && Age <=18) {
    printf("teenager \n");
 }
    else {
        printf("child \n ");
 }
 return 0;
 }