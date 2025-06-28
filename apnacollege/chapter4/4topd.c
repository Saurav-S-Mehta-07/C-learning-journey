//decrement operator

//-two tyes : --i(pre decrement operator), i--(post decrement oprator )

// --i(pre decrement operator)
#include<stdio.h>
 int main() {
 int i = 1;
 printf("%d \n ", i--); //use, then decrease
 printf("%d\n ", i);


//i--(post decrement oprator )
int i = 1;
printf("%d \n ", --i); //decrease, then use
printf("%d\n ", i);

    return 0;
}