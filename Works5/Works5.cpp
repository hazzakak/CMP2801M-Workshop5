#include <iostream>
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    Triangle tri(5, 4);
    Rectangle rect(5, 4);
    cout << tri.area() << endl;
    cout << rect.area() << endl;
}

// Using an appropriate file structure, write a program that defines a Shape class with a constructor that gives
// values to properties width and height. Then define two sub - classes: Triangle and Rectangle.Define
// a method, area(), that calculates the area of the shape.In the application file, define instances of
// Triangle and Rectangle and then call the area() function for these two objects, ensuring that the
// correct values are returned.
// To assist, it may be useful to refer to page 632 (pdf p20) for information on redefining functions in child
// classes.
