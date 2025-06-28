// switch

#include<stdio.h>
int main() {
 int day; //1-monday, 2-tuesday, 3-wednesday, 4-thursday, 5-friday, 6-sturday, 7-sunday;
    printf("enter day(1-7): ");
    scanf("%d", &day);

switch (day) {
    case 1 : printf("monday");
    break;
     case 2 : printf("tuesday");
    break;
     case 3 : printf("wednesday");
    break;
     case 4 : printf("thursday");
    break;
     case 5 : printf("friday");
    break;
     case 6 : printf("saturday");
    break;
     case 7 : printf("sunday");
    break;
    default : printf("not a valid day\n ");
    
}

 char Day; //1-monday, 2-tuesday, 3-wednesday, 4-thursday, 5-friday, 6-sturday, 7-sunday;
  //%s for more then one letter
    printf("\n enter Day(a-g): ");
    scanf("%s", &Day);

switch (Day) {
    case 'a' : printf("monday");
    break;
     case 'b' : printf("tuesday");
    break;
     case 'c': printf("wednesday");
    break;
     case 'd': printf("thursday");
    break;
     case 'e': printf("friday");
    break;
     case 'f' : printf("saturday");
    break;
     case 'g' : printf("sunday");
    break;
    default : printf("not a valid day");
    
}
    return 0;
}