#include <stdio.h>
#include "safeint.h"
#include <limits.h>

void main(int argc, char *argv[]){
    int a = safestrtoint(argv[1]).value;
    int b = safestrtoint(argv[2]).value;

    struct SafeResult result = safedivide(a, b);

    if(result.errorflag){
        printf("Error - overflow or underflow or divisor==0");
    }else{
        printf("The result is: %d", result.value);
    }
}