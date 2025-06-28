// programe to convert a decimal number to (i) binary (ii) octal (iii) hexadecimal

#include <stdio.h>

int main() {
int a[100];

int num;
printf("enter decimal number : ");
scanf("%d", &num);

int  base;
printf("enter base number \n 2 for binary. 8 for octal. 16 for hexadecimal. \n");
scanf("%d", &base);
int count = 0;
int i = 0,rem;
while(num!=0)
{
  rem= num%base;
  a[i] = rem;
  i++;
  num = num/base;
  count++;
}
 
 for(i=count-1;i>=0; i--)
 {
    if(a[i]<10)
    {
    printf("%d ",a[i]);
    }else{
        printf("%c", a[i]-10+'A');
    }
 }
    return 0;
}