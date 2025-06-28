/*returns the sum of square of all odd numbers from 1 to 25 
using function with no arguments and return type*/
#include<stdio.h>
int function();
int mian(){
    int result;
  result = function();
  printf("sum of squares of odd numbers 1 to 25 : %d", result);
    return 0;
}
int function(){
    int sum=0,n;
    for(n=1; n<=25; n++){
        if(n%2!=0)
        sum = sum + n*n;
    }
  return sum;
}
