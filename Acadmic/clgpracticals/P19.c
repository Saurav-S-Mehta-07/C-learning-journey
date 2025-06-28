//Ques 19. Write a program to check whether a number is prime or not.

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

/*output
Enter a number: 3
3 is a prime number.

Enter a number: 2
2 is a prime number.

Enter a number: 9
9 is not a prime number.
*/