/*4.WAP to create a function isArmstrong to find that
 the number is armstrong or not.*/
 #include<stdio.h>
 #include<math.h>
 void isArmstrong(int n);
 int main(){
     int n;
     printf("enter number : ");
     scanf("%d",&n);
     isArmstrong(n);

    return 0;
 }

 void isArmstrong(int n){
        int orginalNum = n;
        int d = 0, sum = 0, rem;
        while(n!=0){
            d++;
            n/=10;
        }
    
     n = orginalNum;

        while(n!=0)
        {
            rem = n%10;
            n = n/10;
            sum = sum + pow(rem,d);
        }
        if(orginalNum == sum){
            printf("an Armstrong number\n");
        }
        else{
            printf("not an Arnstrong number \n");
        }
 }