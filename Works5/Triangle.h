#pragma once
# include "Shape.h"

// inherit shape as a parent class
class Triangle: public Shape
{
public:
	Triangle(int h, int w);
	// override "area" to correctly output the triangles area.
	double area();
	int TriWidth;
	int TriHeight;
};

