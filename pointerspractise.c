#include<stdio.h>

void doworks(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a = 23, b = 31;
    int sum, prod, avg;
    doworks(a, b, &sum, &prod, &avg);

    printf("sum: %d, product: %d, average: %d", sum, prod, avg);
    return 0;
}

void doworks(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}