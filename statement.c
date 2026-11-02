#include <stdio.h>

int main(){
    char ch;
    printf("enter a character: ");
    scanf("%c", &ch);
    
    if(ch >= 'A' && ch <= 'Z'){
        printf("the character is uppercase letter");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("the character is lowercase letter");
    }
    else{
        printf("the character is not a lettter");
    }
    return 0;
}
