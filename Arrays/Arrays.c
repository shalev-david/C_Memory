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


/*
Because char takes only 1 byte you can pass in any type that takes 1 byte or more
and pass in the length of all of the array in bytes -
for example an array of int arr[4] you will pass sizeof(arr)
and it will copy the array one byte after another
*/
void CharArrCopy(char copyFrom[], char copyTo[], size_t lengthToCopy){

    for(unsigned i =0; i< lengthToCopy; i++){
        copyTo[i] = copyFrom[i];
    }
}

int CharArrCompare(char* firstArray, char* secondArray, size_t length){
    for(unsigned i = 0; i< length; i++){
        if(firstArray[i] != secondArray[i]) return 0;
    }
    return 1;
}

void CharArrSetValues(char* arr, char value, size_t length){
    for(unsigned i =0; i< length; i++){
        arr[i] = value;
    }
}

void CharArrSwap(char* firstArray, char* secondArray, size_t length){
    char* tempArray = malloc(length);
    CharArrCopy(firstArray, tempArray, length);
    CharArrCopy(secondArray, firstArray, length);
    CharArrCopy(tempArray, secondArray, length); 

    free(tempArray);
}
