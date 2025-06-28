// passing argumets
// table of a no.

#include<stdio.h>
void printtable(int n);

int main() {
int n;
printf("enter a number : ");
scanf("%d", &n);

printtable(n); //the variable in functon call known as "actual parameter" and "arguments".
    return 0;
}

 void printtable(int n) //the variable in function definition known as "parameter" and "formal parameeter".
    { for(int i= 1; i<= 10; i++) {
    
printf("%d\n", n*i);
    }
    }
