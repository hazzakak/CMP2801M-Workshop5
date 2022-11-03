#include <iostream>
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    // init the objects with height and widths of 5, 4.
    Triangle tri(5, 5);
    Rectangle rect(20, 20);

    // print the areas of both triangle and rectangle objects.
    cout << "Area of triangle is: " << tri.area() << endl;
    cout << "Area of rectangle is: " << rect.area() << endl;
}

// Using an appropriate file structure, write a program that defines a Shape class with a constructor that gives
// values to properties width and height. Then define two sub - classes: Triangle and Rectangle.Define
// a method, area(), that calculates the area of the shape.In the application file, define instances of
// Triangle and Rectangle and then call the area() function for these two objects, ensuring that the
// correct values are returned.
// To assist, it may be useful to refer to page 632 (pdf p20) for information on redefining functions in child
// classes.
