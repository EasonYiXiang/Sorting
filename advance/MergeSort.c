// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 100



void mergeSort(int *, int , int);
void mergeArr(int *, int, int ,int);

void swap(int *, int *);

int main() {
    

    int arr[] = {10,20,15,62,315,884,6124,954,321,467,1234};
    
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("length : %d\n" , length);
    

    mergeSort(arr, 0, length-1);
    for(int i = 0 ; i < length ; i++){
        printf("%d " , arr[i]);
    }
    

    return 0;
}

void mergeSort(int *ptr,int startIndex, int endIndex){
    if(startIndex >= endIndex) return;
    
    int mid = (startIndex + endIndex)/2;
    
    mergeSort(ptr, startIndex, mid);
    mergeSort(ptr, mid+1, endIndex);
    
    mergeArr(ptr, startIndex, mid, endIndex);
    
}

void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


void mergeArr(int *ptr, int startIndex, int mid, int endIndex){
    int *tempArr = (int*) malloc((endIndex-startIndex+1)*sizeof(int));
    
    int i = startIndex;
    int j = mid+1;
    int count = 0;
    while(i <= mid && j <= endIndex){
        if(*(ptr+i) < *(ptr+j)){
            *(tempArr+count) = *(ptr+i);
            i++;
        }
        else{
            *(tempArr+count) = *(ptr+j);
            j++;
        }
        count++;
    }
    
    while(i <= mid){
        *(tempArr+count) = *(ptr+i);
        i++;
        count++;
    }
    while(j <= endIndex){
        *(tempArr+count) = *(ptr+j);
        j++;
        count++;
    }
    
    i = 0;
    for(int k = startIndex ; k <= endIndex ; k++){
        *(ptr+k) = *(tempArr+i);
        i++;
    }
    free(tempArr);
    
}










