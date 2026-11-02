#include<stdio.h>

int main(){
    int marks[3];

    printf("enter the 1st subject number: ");
    scanf("%d", &marks[0]);
    printf("enter the 2nd subject number: ");
    scanf("%d", &marks[1]);
    printf("enter the 3rd subject number: ");
    scanf("%d", &marks[2]);

    printf("1st subject = %d\n", marks[0]);
    printf("2nd subject = %d\n", marks[1]);
    printf("3rd subject = %d\n", marks[2]);

    return 0;
}