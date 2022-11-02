#pragma once
# include "Shape.h"

class Triangle: public Shape
{
public:
	Triangle(int h, int w);
	double area();
	int TriWidth;
	int TriHeight;
};

