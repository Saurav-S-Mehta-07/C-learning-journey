/*question 57:
enter address (house no., block, city, state) of 5 people*/

#include <stdio.h>
#include <string.h>

struct address {
    int houseno;
    int  blockno;
    char city[100];
    char state[100];

};

void printAdd(struct address add);

int main() {

struct address adds[5];

// input
printf("enter info for person 1 : ");
scanf("%d\n", &adds[0].houseno);
scanf("%d\n", &adds[0].blockno);
scanf("%s\n", adds[0].city);
scanf("%s\n", adds[0].state);

printf("enter info for person 2 : ");
scanf("%d\n", &adds[1].houseno);
scanf("%d\n", &adds[1].blockno);
scanf("%s\n", adds[1].city);
scanf("%s\n", adds[1].state);

printf("enter info for person 3:");
scanf("%d\n", &adds[2].houseno);
scanf("%d\n", &adds[2].blockno);
scanf("%s\n", adds[2].city);
scanf("%s\n", adds[2].state);

printf("enter info for person 4 :");
scanf("%d\n", &adds[3].houseno);
scanf("%d\n", &adds[3].blockno);
scanf("%s\n", adds[3].city);
scanf("%s\n", adds[3].state);

printf("enter info for person 5 : \n");
scanf("%d\n", &adds[4].houseno);
scanf("%d\n", &adds[4].blockno);
scanf("%s\n", adds[4].city);
scanf("%s\n", adds[4].state);

printAdd(adds[0]);
printAdd(adds[1]);
printAdd(adds[2]);
printAdd(adds[3]);
printAdd(adds[4]);
return 0;
} 

void printAdd(struct address add) {
    printf("address is : %d, %d, %s, %s, add.houseno, add.blockno, add.city, add.state ");
}