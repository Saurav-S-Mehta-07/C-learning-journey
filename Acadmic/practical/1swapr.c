// Saurav singh mehta (106)
/*1.WAP to swap two numbers using call by value 
    and call by reference.*/

#include <stdio.h>
void swap(int *a, int *b);
int main(){

int a, b;
printf("enter a and b : \n");
scanf("%d%d",&a,&b);

printf("before swapping a = %d, b = %d\n", a,b);
swap(&a, &b);
printf("after swapping a = %d, b = %d\n", a, b);

    return 0;
}
void swap(int *a, int *b){
         int temp;
         temp = *a;
         *a = *b;
         *b = temp;
}

/*
enter a and b : 
2
3
before swapping a = 2, b = 3
after swapping a = 3, b = 2
*/