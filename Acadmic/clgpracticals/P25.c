//Ques 25. Write a program to check whether a number is palindrome or not.
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;               // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num = num / 10;                          // Remove the last digit
    }

    // Check if the original number and the reversed number are the same
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
/*
output
Enter an integer: 1234321
1234321 is a palindrome.


*/