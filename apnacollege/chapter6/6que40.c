/*question 39;
will the address outpurt be same? */
#include<stdio.h>

void printAddress(int n); //*n : to print same address: call by reference


int main() {
    int n = 4;
    printf("%u\n", &n);
    printAddress(n);//&n

    return 0;
}
void printAddress(int n)/* n */ {
    printf("%u\n", &n);//n
}
/*answer is : no, both address are differet 
because of call by value*/