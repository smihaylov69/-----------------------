#include "maths.h"
#include <stdio.h>

int FACT(int n){
    int res=1;
    for(int i=1;i<=n;i++){
        res=res*i;
    }
    return res;
}