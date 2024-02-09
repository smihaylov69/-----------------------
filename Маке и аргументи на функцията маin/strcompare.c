#include <stdio.h>
#include "mystrings.h"

void main(int argc, char *argv[]){
    int res=0;
    res=strcompare(argv[1],argv[2]);
    printf("%d",res);
}