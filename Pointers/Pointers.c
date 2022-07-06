#include "Pointers.h"

void add(int* pNum, int incBy){
    (*pNum) += incBy;
}

void swap(int* firstPtr, int* secondPtr){
    
    int tempValue = *firstPtr;

    *firstPtr = *secondPtr;
    *secondPtr = tempValue;
}

