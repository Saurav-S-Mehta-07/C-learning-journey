/*question 11 :
will this code:
int x = 2;
if(x=1) {
printf("x is equal to 1");
}
else {
printf("x is not equal to 1");
}
a. give error
b. print"x is equal to 1"
c. print"x is  not equal to 1"
*/
#include<stdio.h>
int main() {
int x = 2;
//bcz to check equal to we use ==  but here first x = 2 saved but in below line x's new value 1;
//if in below line x we use any no. except 0, it print "x is equal to 1" ....
if(x=0) {
printf("x is equal to 1 \n ");
printf("%d", x);
}
else {
printf("x is not equal to 1");
}
    return 0;
}