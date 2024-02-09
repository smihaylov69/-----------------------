#include <stdio.h>
#include <math.h>

void main(){
    long arr[5]={3,5,7,2,8};
    printf("The transformed array:\n");
    for(int i=0;i<5;i++){
        arr[i]=pow(arr[i],4);
        printf("%ld\n",arr[i]);
    }
}