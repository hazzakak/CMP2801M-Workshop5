#include "Shape.h"
#include <iostream>

int ShapeWidth;
int ShapeHeight;

Shape::Shape(int w, int h)
{
	ShapeWidth = w;
	ShapeHeight = h;
}


double Shape::area()
{
	return ShapeWidth * ShapeHeight;
}
