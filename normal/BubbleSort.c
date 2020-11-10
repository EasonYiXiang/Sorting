// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 100


void bubbleSort(int *, int);

void swap(int *, int *);

int main() {
    

    int arr[] = {10,20,15,62,315,884,6124,954,321,467,1234};
    
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("length : %d\n" , length);
    

    bubbleSort(arr, length);
    for(int i = 0 ; i < length ; i++){
        printf("%d " , arr[i]);
    }
    
    return 0;
}

void bubbleSort(int *ptr, int length){
    bool flag = false;
    for(int i = 0 ; i < length-1 ; i++){
        flag = false;
        for(int j = 0 ; j < length-i-1 ; j++){
            if(ptr[j] > ptr[j+1]){
                swap(ptr+j , ptr+j+1);
                flag = true;
            }
        }
        if(flag)
            break;
    }
}

void swap(int *n1, int *n2){
    *n1 ^= *n2;
    *n2 ^= *n1;
    *n1 ^= *n2;
}
