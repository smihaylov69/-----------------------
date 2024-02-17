#include <stdio.h>
#include <string.h>

void main(){
    char name[50];

    printf("Enter the name: ");
    fgets(name, 50, stdin);

    char *p = strchr(name, '\n');

    if(p != NULL){
        *p = '\0';
    }

    printf("The entered name is: %s\n", name);
}