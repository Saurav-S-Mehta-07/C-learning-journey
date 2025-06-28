// question 5 :
/* write a program to check if a number is odd or even*/
# include<stdio.h>
int main() {
    // even = 1, odd = 0;
    /* we use modular operator 
    why modular operator ? because if any no divided by 2 then
     the remainder is 1 when no. is odd and remainder = 0 when no. is even*/

    int x, y;
    printf("enter x");
    scanf("%d", &x);
    printf("enter y");
    scanf("%d", &y);

    printf(" \n %d \n ", x%2 == 0);
    printf("%d", y%2 == 1);

   
    return 0;
}