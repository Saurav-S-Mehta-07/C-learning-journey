/*5.WAP to create a function isPalindrome to find that the number is Palindrome or not.*/
#include<stdio.h>
void isPalindrome(int n);
int main(){
 int n;
 printf("enter number : ");
 scanf("%d",&n);

 isPalindrome(n);

    return 0;
}
void isPalindrome(int n){
    int rem, rev = 0;
    int originalNum = n;
    while(n!=0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(originalNum == rev){
        printf("A palindrome number\n");
    }
    else{
        printf("Not a palindrome number\n");
    }
}

/*
enter number : 1234321
A palindrome number

enter number : 1234
Not a palindrome number
*/