#include <iostream>
#include <string>
using namespace std;

double calculateArea(double x)
{
    double PI = 3.14159;
    double area = PI * x * x;
    return area;

}

double calculateRectangle(double width, double height)
{
    return width * height;
}

int main()
{
    const double PI = 3.14159;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = calculateArea(radius);
    cout << "The area of the circle with radius: " << radius << " is " << area << endl;


    double width, height;
    cout << "Enter  width  of  rectangle: ";
    cin >> width;
    cout << "Enter  height  of  rectangle: ";
    cin >> height;

    double rectangleArea = calculateRectangle(width, height);
    cout << "The area of the rectangle with width: " << width << " and height: " << height << " is " << rectangleArea << endl;
    return 0;
}

