// question 1 :
// part a : write a program for volume of a  cuboid when length = 8, breadth = 10, heght = 7;

# include<stdio.h>
int main() {
    int l, b, h;
    l = 8, b = 10, h = 7;
    printf("volume of a cuboid 1 = %d \n ", l*b*h);

    //part b : let length = a, breadth = B, hight = c;

    int a, B, c;
    printf("enter a");
    scanf("%d", &a);

    printf("enter B");
    scanf("%d", &B);

    printf("enter c");
    scanf("%d", &c);
    
printf("volume of cuboid = %d", a*B*c);
    return 0;
}