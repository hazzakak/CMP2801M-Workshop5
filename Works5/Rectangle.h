#pragma once
# include "Shape.h"

// inherit shape as a parent class
class Rectangle : public Shape
{
public:
	Rectangle(int h, int w);
	// don't need "area()" as Shape already has a basic area finder.
	int RecHeight;
	int RecWidth;
};

