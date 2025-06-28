// programe to convert decimal into (i)binary (ii)octal (iii) hexdecimal using array function.

#include<stdio.h>

void func(int n, int b);

int main(){

int a[100],b,n;
printf("Hello sir! enter decimal number  : ");
scanf("%d",&n);

printf("okay! now enter base number \nenter a valid number out of these:\nbinary:2, ocatal:8, hexadecimal:16\n");
scanf("%d",&b);

func(n,b);

    return 0;
}

void func(int n, int b)
{
    int orginalNum = n;
  int rem;
  int i = 0, count = 0;
  int a[100];
while(n!=0)
{
    if(b==2||b==8||b==16)
    {
     rem = n%b;
     a[i]  = rem;
     i++;
     n = n/b;
     count++;
    }
    else
    {
        printf("Sir there is no option in this base number \nplease enter a valid base number next time.\nThank you!\n");
        break;
    }
}
if(b==2){
    printf("decimal no. %d in binary = ",orginalNum);
}
else if(b==8){
    printf("decimal no. %d in ocatl = ",orginalNum);
}
else if(b==16){
    printf("decimal no. %d in hexadecimal = ", orginalNum);
}
else{
    return;
}
for(i = count-1; i>=0; i--)
{
    if(a[i]<10)
    {
    printf("%d ",a[i]);
    }
    else
    {
    printf("%c",a[i]-10+'A');
    }
}
}