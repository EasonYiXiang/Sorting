// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 100

void selectSort(int *, int);



void swap(int *, int *);

int main() {
    

    int arr[] = {10,20,15,62,315,884,6124,954,321,467,1234};
    
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("length : %d\n" , length);
    

    selectSort(arr, length);
    for(int i = 0 ; i < length ; i++){
        printf("%d " , arr[i]);
    }
    

    return 0;
}

void selectSort(int *ptr, int length){
    
    for(int i = 0 ; i < length-1 ; i++){
        int minIndex = i;
        for(int j = i+1 ; j < length ; j++){
            if(ptr[j] < ptr[minIndex])
                minIndex = j;
        }
        if(i != minIndex)
            swap(ptr+i , ptr+minIndex);
        
    }
}

void swap(int *n1, int *n2){
    *n1 ^= *n2;
    *n2 ^= *n1;
    *n1 ^= *n2;
}
















