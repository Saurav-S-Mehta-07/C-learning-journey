//Ques 18. Write a program to print n terms of Fibonacci series, where n is inputte.

#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
/*
Enter the number of terms: 7
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8,
*/