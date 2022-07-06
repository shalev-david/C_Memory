#ifndef RECTANGLE_H
#define RECTANGLE_H

typedef struct Rectangle Rectangle;
struct Rectangle 
{
    float width;
    float height;
};

float GetRectangleArea(Rectangle rect);

Rectangle GetBiggerArea(Rectangle firstRect, Rectangle secondRect);

int CanFitIn(Rectangle firstRect, Rectangle secondRect);

void InitializeRect(Rectangle* rect, float width, float height);

#endif