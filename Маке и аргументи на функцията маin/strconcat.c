#include <stdio.h>
#include "mystrings.h"

void main(int argc, char *argv[]){
    strconcat(argv[1],argv[2]);
    if(argv[1])
    printf("%s",argv[1]);
}