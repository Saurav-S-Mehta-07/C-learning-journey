//Ques 3. Write a program to calculate the perimeter of rectangle?
#include<stdio.h>
int main() {

int l,b,P;
printf("enter length of a rectangle (l) = ");
scanf("%d", &l);
printf("enter breadth of a rectangle (b) = ");
scanf("%d", &b);

// perimeter of rectangle = 2*(length + breadth)
P = 2 * (l+b);
printf("perimeter of rectangle = %d", P);

    return 0;
}

/*output- 
enter length of a rectangle (l) = 7
enter breadth of a rectangle (b) = 5
perimeter of rectangle = 24
*/