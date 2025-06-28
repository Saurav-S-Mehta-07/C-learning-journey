/* question 14:
print the numbers from 0 to n, if n is given by  user  .... let n = 5 */
 # include<stdio.h>
 int main() {
//by for loop:

    for (int i = 0; i <= 5; i++){
        printf("%d\n", i);
    }
// int n;
// printf("enter n : ");
// scanf("%d", &n); 
//   for (int i = 0; i <= 5; i++){
//         printf("%d\n", i);
//  }


//by while loop:
int n;
printf("enter n : ");
scanf("%d", &n);
    int j = 0;
    while (j <= n) {
        printf("%d\n", j);
        j++;
    }
    return 0;
 }