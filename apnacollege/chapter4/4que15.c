/* question 15:
print the sum of first n natural number also print them in reverse. .*/

#include<stdio.h>
int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
for (int i = 1; i <= n; i = i + 1) {
    sum = sum + i; // sum += i
}
printf("sum is : %d \n", sum);

// //now print in  reverse

for (int i = n; i >= 1; i-- ) {
    printf("%d\n", i);
} 

// //by in only one for loop
// //j = j-1 == j--
// //i = i + 1 == i++
//  int n;
//     printf("enter number : ");
//     scanf("%d", &n);

//     int sum = 0;
// for (int i = 1, j = n; i <= n && j>=1; i++, j--) {
//     sum = sum + i; // sum += i 
// printf("%d\n", j);
// }
// printf("sum is : %d \n", sum);


// // removing i : 1+2+3 == 3+2+1 = 6
//  int n;
//     printf("enter number : ");
//     scanf("%d", &n);

//     int sum = 0;
// for (int j = n; j>=1; j--) {
//     sum = sum + j; // sum += j
// printf("%d\n", j);
// }
// printf("sum is : %d \n", sum);

    return 0;
}