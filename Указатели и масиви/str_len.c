#include <stdio.h>

int string_len(char str[]){
    int i = 0;

    while(*str != '\0'){
        str ++;
        i ++;

    }
    return i;
}

void main(){
    char str[] = "Hello";
    int len = string_len(str);
    printf("%d", len);
}