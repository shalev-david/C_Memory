#include "main.h"

int main(){

    Rectangle *rect1 = malloc(sizeof(Rectangle));
    Rectangle *rect2 = malloc(sizeof(Rectangle));
    Rectangle *rect3 = malloc(sizeof(Rectangle));

    Rectangle * allRectangles[3] = {rect1, rect2, rect3};

    InitializeRect(rect1, 20, 30);
    InitializeRect(rect2, 50, 70);
    InitializeRect(rect3, 3, 4);

    PrintRectangleArray(allRectangles, 3);


}