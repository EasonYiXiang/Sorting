// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 100

void quickSort(int *, int, int);
int partition(int *, int, int);

void swap(int *, int *);

int main() {
    

    int arr[] = {10,20,15,62,315,884,6124,954,321,467,1234};
    
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("length : %d\n" , length);
    

    quickSort(arr, 0, length-1);
    for(int i = 0 ; i < length ; i++){
        printf("%d " , arr[i]);
    }
    

    return 0;
}

void quickSort(int *ptr,int startIndex, int endIndex){
    if(startIndex >= endIndex) return;
    
    int pv = partition(ptr, startIndex, endIndex) ;
   
    quickSort(ptr, startIndex, pv-1);
    quickSort(ptr, pv+1 , endIndex);
    
}

void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


int partition(int *ptr, int startIndex, int endIndex){
    int pivot = ptr[endIndex];
    int i = startIndex - 1;
    
    for(int j = startIndex ; j < endIndex ; j++){
        if(ptr[j] < pivot){
            i++;
            swap(ptr+i, ptr+j);
        }
        
    }
    swap(ptr+i+1 , ptr+endIndex);
    return i+1;
}













