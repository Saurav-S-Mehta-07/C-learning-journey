// standard library functions 

// 2. strcpy(newStr, oldStr) : copies value of old string to new string.

#include<stdio.h>
#include<string.h>

int main() {
  char oldStr[]= "oldStr";
  char newStr[] = "newStr";
  strcpy(newStr, oldStr); 
  puts(newStr);
    return 0;
}