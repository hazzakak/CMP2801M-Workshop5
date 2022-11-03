#include "Rectangle.h"

double RecHeight;
double RecWidth;

Rectangle::Rectangle(double width, double height) : Shape(width, height)
{
	RecHeight = height;
	RecWidth = width;
};

