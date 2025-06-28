/*15.WAP to take input a string and display its characters and addresses.*/

#include <stdio.h>
#include <string.h>
int main(){

char str[30];
printf("enter string : ");
gets(str);

int i;

for(i = 0; i<strlen(str); i++)
{
    printf("%d character : %c \n",i+1, str[i]);
    printf("address of %d character : %u\n",i+1, &str[i]);
}

    return 0;
}

/*
enter string : saurav
1 character : s
address of 1 character : 6422270
2 character : a
address of 2 character : 6422271
3 character : u
address of 3 character : 6422272
4 character : r
address of 4 character : 6422273
5 character : a
address of 5 character : 6422274
6 character : v
address of 6 character : 6422275
*/