// for loop :

# include<stdio.h>
int main() {
    //if we have to print one statement more then 1 time....
    // in the below line (i) is : iterator ; counter
   for(int i = 1; i <= 5; i = i + 1 ) {
    printf("\n hello world ");
   }

   //if we have to print 1 to 10...]

   for(int a = 1; a <= 10; a = a + 1) {
    printf("\n %d ", a);
   }

printf(" \n ");


   //if we have to print 10 to 1....]
    for(int x = 10 ; x >= 1; x = x - 1) {
    printf(" \n %d", x);
   }

    return 0;
}