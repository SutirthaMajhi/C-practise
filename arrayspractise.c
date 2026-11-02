#include <stdio.h>

void storetables(int arr[][10], int n, int m, int number);     // function//

int main(){
    int tables[2][10];
    storetables(tables, 0, 10, 2);   // function declaration//
    storetables(tables, 1, 10, 3);

    for (int i = 0; i<10; i++){
        printf("%d\t", tables[0][i]);
    }
    printf("\n");                                 // function call//

    for(int i =0; i<10; i++){
        printf("%d\t", tables[1][i]);
    }
    printf("\n");
    return 0;
}

void storetables(int arr[][10], int n, int m, int number){
    for(int i =0; i<m; i++){                                        // function defination//
        arr[n][i] = number * (i+1);
    }
}