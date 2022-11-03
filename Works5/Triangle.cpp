#include "Triangle.h"

double TriWidth;
double TriHeight;

Triangle::Triangle(double width, double height) : Shape(width, height) {
	TriWidth = width;
	TriHeight = height;
}

double Triangle::area()
{
	double area = (TriWidth * TriHeight) * 0.5;
	return area;
}
