#include "../include/array_function.h"

void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
    for(int i=0; i<size_src1;i++){
        dest[i]=src1[i];
    }
    for(int i=0; i<size_src2;i++){
        dest[size_src1+i]=src2[i];
    }
}

void quick_sort(int* array, int left, int right){
    if (left>=right) return;
    int i=left;
    int pivot=array[right];
    for(int j=left;j<right;j++){
        if(array[j]<pivot){
            int temp=array[j];
            array[j]=array[i];
            array[i]=temp;
            i++;
        }
    }
    int temp=array[i];
    array[i]=array[right];
    array[right]=temp;
    
    quick_sort(array,left,i-1);
    quick_sort(array,i+1,right);
}

void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    int temp[size_src1+size_src2];
    for(int i=0; i<size_src1;i++){
        temp[i]=src1[i];
    }
    for(int i=0; i<size_src2;i++){
        temp[size_src1+i]=src2[i];
    }
    quick_sort(temp,0,size_src1+size_src2-1);
    for(int i=0;i<size_src1+size_src2;i++){
        dest[i]=temp[i];
    }
}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    int temp[size];
    for(int i=0;i<size;i++){
        temp[i]=src[i];
    }
    quick_sort(temp,0,size-1);
    *min=temp[0];
    *max=temp[size-1];
}

