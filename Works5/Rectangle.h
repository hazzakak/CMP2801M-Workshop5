#pragma once
# include "Shape.h"

// inherit shape as a parent class
class Rectangle : public Shape
{
public:
	Rectangle(double h, double w);
	// don't need "area()" as Shape already has a basic area finder.
	double RecHeight;
	double RecWidth;
};

