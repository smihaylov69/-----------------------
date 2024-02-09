#include "safeint.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct SafeResult safeadd(int a, int b) {
    struct SafeResult result;
    if((a + b > INT_MAX) || (a + b < INT_MIN)){
        result.errorflag = 1;
    }else{
        result.value = a + b;
        result.errorflag = 0;
    }
        return result;
}
struct SafeResult safesubtract(int a, int b){
    struct SafeResult result;
    if((a - b < INT_MIN) || (a - b > INT_MAX)){
        result.errorflag = 1;
    }else{
        result.value = a - b;
        result.errorflag = 0;
    }
        return result;
}
struct SafeResult safemultiply(int a, int b){
    struct SafeResult result;
    if((a * b > INT_MAX) || ( a * b < INT_MIN)){
        result.errorflag = 1;
    }else{
        result.value = a * b;
        result.errorflag = 0;
    }
        return result;
}
struct SafeResult safedivide(int a, int b){
    struct SafeResult result;
    if(b == 0){
        result.errorflag = 1;
    }else{
        result.value = a / b;
        result.errorflag = 0;
    }
        return result;
}
struct SafeResult safestrtoint(char str[]){
    struct SafeResult result;
    result.value = atoi(str);
    struct SafeResult addResult = safeadd(result.value, 0);
    struct SafeResult multiplyResult = safemultiply(result.value, 1);

    if (addResult.errorflag == 1 || multiplyResult.errorflag == 1) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.errorflag = 0;
    }

    return result;
}