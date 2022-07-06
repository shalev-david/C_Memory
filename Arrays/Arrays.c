#include "Arrays.h"

void FillArrayInFibonachi(int *arr, size_t length){
    unsigned currentValue = 1;
    unsigned previousValue = 1;
    for(unsigned i = 0; i<length ; i++){
        if( i == 0) arr[i] = 0;
        else if(i == 1) arr[i] = 1;
        else if(i == 2) arr[i] = 1;
        else{
            unsigned temp = currentValue;
            currentValue += previousValue;
            previousValue = temp;
            arr[i] = currentValue;
        }
    }
}

void PrintArray(int *arr, size_t length){
    for(unsigned i =0; i< length; i++ ){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void PrintRectangleArray(Rectangle** arr, size_t length){
    for(unsigned i = 0; i < length; i++){
        printf("Rectangle %d\n", i);
        printf("Width = %.3f\n", arr[i]->width);
        printf("Height = %.3f\n", arr[i]->height);
        printf("\n");
    }
};
