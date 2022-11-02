#include "Triangle.h"

int TriWidth;
int TriHeight;

Triangle::Triangle(int width, int height) : Shape(width, height) {
	TriWidth = width;
	TriHeight = height;
}

double Triangle::area()
{
	double area = (TriWidth * TriHeight) * 0.5;
	return area;
}
