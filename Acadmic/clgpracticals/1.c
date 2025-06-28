#include<stdio.h>
int main() {

int choice;
float a,b, result;

do{
printf("\n Menu : \n1.addition\n2.substriction\n3.Multiplication\n4.division\n5.Exit\n");
printf("enter choice(1-5) : ");
scanf("%d",&choice);
if(choice >=1 && choice <= 4) {
   printf("enter two numbers : ");
   scanf("%f %f", &a, &b);
}

switch(choice) {
   case 1: result = a + b;
           printf("result = %.2f",result);
           break;
   case 2: result = a - b;
           printf("result = %.2f",result);
           break;
   case 3: result = a * b;
           printf("result = %.2f",result);
           break;  
   case 4: 
   if(b!=0) {
      result = a / b;
           printf("result = %.2f",result);
   }else{
      printf("not defined");
   }
           break; 
   case 5: 
          printf("exiting the calculator"); 
   default:
          printf("invalid choice");    
}
}while (choice!=5);

   return 0;
}