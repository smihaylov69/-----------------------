#include <stdio.h>

void main(){
    int arr[5]={5,1,2,6,3};
    #ifdef _WIN32
    for(int i=0;i<4;i++){
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    #elif defined _linux_
    for (int i = 0; i < 5 - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    #elif defined _APPLE_
    for (int i = 1; i < 5; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    #else
    for(int i=4;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    #endif
}