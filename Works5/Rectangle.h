#pragma once
# include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(int h, int w);
	double area();
	int RecHeight;
	int RecWidth;
};

