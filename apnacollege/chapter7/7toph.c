// arrays as function argument

#include<stdio.h>

void printnumbers(int arr[], int n);
                      //*arr 
int main() {
int arr[] = {1,2,3,4,5,6};
printnumbers(arr, 6);
    return 0;
}
void printnumbers(int arr[], int n) {
                    //*arr
    for (int i = 0; i<n; i++) {
        printf("%d \t", arr[i]);
    }
printf("\n");
}