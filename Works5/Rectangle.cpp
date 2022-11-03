#include "Rectangle.h"

int RecHeight;
int RecWidth;

Rectangle::Rectangle(int width, int height) : Shape(width, height)
{
	RecHeight = height;
	RecWidth = width;
};

