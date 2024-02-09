#include <stdio.h>

#define SWAP(a,b,type) type temp=a; \
    a=b; \
    b=temp;
#define SORT(ARRAY, SIZE, TYPE, COMPARE) for(int i=0;i<SIZE-1;i++){ \
    for(int k=0;k<SIZE-i-1;k++){ \
        if(ARRAY[k] COMPARE ARRAY[k+1]){ \
            SWAP(ARRAY[k],ARRAY[k+1],TYPE); \
        } \
    } \
}

void main(){
    char arr[5]={'a','c','b','g','k'};
    SORT(arr,5,char,>);
    for(int i=0;i<5;i++){
        printf("%c\n",arr[i]);
    }
}