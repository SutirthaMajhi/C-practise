#include <stdio.h>
#include <string.h>

struct address{
    int houseno;
    int block;                  //structure create//
    char city[100];
    char state[100];
};
 
void printadd(struct address add);            //structure in function//

int main(){
    struct address adds[3];
    //input//
    printf("enter info for person 1: ");
    scanf("%d", &adds[0]. houseno);
    scanf("%d", &adds[0]. block);
    scanf("%s", &adds[0]. city);
    scanf("%s", &adds[0]. state);
    printf("enter info for person 2: ");
    scanf("%d", &adds[1]. houseno);
    scanf("%d", &adds[1]. block);
    scanf("%s", &adds[1]. city);
    scanf("%s", &adds[1]. state);
    printf("enter info for person 3: ");
    scanf("%d", &adds[2]. houseno);
    scanf("%d", &adds[2]. block);
    scanf("%s", &adds[2]. city);
    scanf("%s", &adds[2]. state);

    printadd(adds[0]);
    printadd(adds[1]);
    printadd(adds[2]);
    printadd(adds[3]);
    printadd(adds[4]);

    return 0;
}

void printadd(struct address add){
    printf("address is: %d, %d, %s, %s\n", add. houseno, add. block, add. city, add. state);
}