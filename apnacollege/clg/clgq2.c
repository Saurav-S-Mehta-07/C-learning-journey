/* question 2: 
write a c program quanter the marks of 5 sub. print total marks of the student as well as percentage.
 physics, chem., maths it english */
# include<stdio.h>
int main() {

int    P, C, M, E, I, total;
P = 78, C = 87, M = 80, E = 90, I = 86;
total = P + C + M + E + I;
 printf("total marks : %d", total);

 float percentage;
 
 printf(" \n percentage = %f", percentage = total/5);
 return 0;

}