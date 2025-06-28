//increment operator
//-two tyes : ++i(pre increment operator), i++(post increment oprator )


// ++i(pre increment operator)
#include<stdio.h>
int main() {
int i = 1;
printf("%d \n ", i++); //use, then increase
printf("%d\n ", i);


//i++(post increment oprator )
int i = 1;
printf("%d \n ", ++i); //increase, then use
printf("%d\n ", i);

    return 0;
}