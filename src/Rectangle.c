#include "include/Rectangle.h"

float GetRectangleArea(Rectangle rect){
    return rect.width * rect.height;
}

Rectangle GetBiggerArea(Rectangle firstRect, Rectangle secondRect){
    float areaFirstRect = GetRectangleArea(firstRect);
    float areaSecondRect = GetRectangleArea(secondRect);
    if(areaFirstRect > areaSecondRect){
        return firstRect;
    }
    return secondRect;
}

int CanFitIn(Rectangle firstRect, Rectangle secondRect){
    if((firstRect.width >= secondRect.width && firstRect.height >= secondRect.height) ||
    (firstRect.width <= secondRect.width && firstRect.height <= secondRect.height))
    {
        return 1;
    }
    return 0;
}

void InitializeRect(Rectangle* rect, float width, float height){
    rect->height = height;
    rect->width = width;
}
