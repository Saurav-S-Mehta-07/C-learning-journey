// convertions of decimal into binary,octal,hexadecimal;

#include<stdio.h>

void convert(int, int);

int main(){
int n = 123;

convert(n,2);
puts("\n");
convert(n,8);
puts("\n");
convert(n,16);

    return 0;
}

void convert(int num, int base){
    int rem = num%base;
    if(num==0){
        return;
    }
    convert(num/base,base);
    if(rem<10){
        printf("%d",rem);
    }
    else{
        printf("%c",rem-10+'A');
    }
}