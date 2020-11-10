// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 100

void insertSort(int *, int);

void swap(int *, int *);

int main() {

    int arr[] = {10,20,15,62,315,884,6124,954,321,467,1234};
    
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("length : %d\n" , length);
    

    insertSort(arr, length);
    for(int i = 0 ; i < length ; i++){
        printf("%d " , arr[i]);
    }

    return 0;
}


void swap(int *n1, int *n2){
    *n1 ^= *n2;
    *n2 ^= *n1;
    *n1 ^= *n2;
}

void insertSort(int *ptr, int length){
    int temp = 0;
    for(int i = 0 ; i < length ; i++){
        temp = ptr[i];
        for(int j = 0 ; j < i ; j++){
            if(ptr[j] > temp){
                swap(ptr+j , &temp);
            }
        }
        ptr[i] = temp;
    }
    
}














