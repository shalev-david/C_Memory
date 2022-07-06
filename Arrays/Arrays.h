#ifndef ARRAYS_H
#define ARRAYS_H

#include <stdlib.h>
#include <stdio.h>
#include "../Rectangle/Rectangle.h"

void FillArrayInFibonachi(int *arr, size_t length);

void PrintIntArray(int* arr, size_t length);

void PrintRectangleArray(Rectangle** arr, size_t length);

void CharArrCopy(char copyFrom[], char copyTo[], size_t lengthToCopy);

int CharArrCompare(char* firstArray, char* secondArray, size_t length);

void CharArrSetValues(char* arr, char value, size_t length);

void CharArrSwap(char* firstArray, char* secondArray, size_t length);
#endif