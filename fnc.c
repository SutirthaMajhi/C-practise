#include <stdio.h>

int calculate_percentage(int science, int math, int sanskrit);

int main() {
    int science, math, sanskrit, result;

    printf("enter the number: ");
    scanf("%d", &science);
    printf("enter the number: ");
    scanf("%d", &math);
    printf("enter the number: ");
    scanf("%d", &sanskrit);

    result = calculate_percentage(science, math, sanskrit);
    printf("percentage is: %d\n", result);
    return 0;
}

int calculate_percentage(int science, int math, int sanskrit) {
    return (science + math + sanskrit) / 3;
}