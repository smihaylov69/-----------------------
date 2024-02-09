#include <stdio.h>

#define SWAP(a,b,type) type temp=a; \
    a=b; \
    b=temp;

void main(){
    int a=3;
    int b=2;
    SWAP(a,b,int);
    printf("%d\n",a);
    printf("%d",b);
}