#include "main.h"

int main(){

    Rectangle* rect = malloc(sizeof(Rectangle));
    InitializeRect(rect, 25, 3.05);
    printf("%.3f %.3f\n", rect->width, rect->height);
}