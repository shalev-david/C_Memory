#include "main.h"

int main(){

    char firstArr[] = "abcd5678";
    char secondArr[] = "1234efgh";
    
    CharArrSwap(firstArr, secondArr, 4);

    printf("%s\n", firstArr);
    printf("%s\n", secondArr);
}