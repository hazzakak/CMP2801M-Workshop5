#include "Shape.h"
#include <iostream>

double ShapeWidth;
double ShapeHeight;

Shape::Shape(double w, double h)
{
	ShapeWidth = w;
	ShapeHeight = h;
}


double Shape::area()
{
	return ShapeWidth * ShapeHeight;
}
