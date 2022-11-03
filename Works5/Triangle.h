#pragma once
# include "Shape.h"

// inherit shape as a parent class
class Triangle: public Shape
{
public:
	Triangle(double h, double w);
	// override "area" to correctly output the triangles area.
	double area();
	double TriWidth;
	double TriHeight;
};

