/*
OBJECT ORIENTED PROGRAMMING | PRACTICAL 01

AIM: Write a program to compute the area of triangle and circle by overloading the area ()
    function.
*/

#include <iostream>

class Shape {
public:
    // Compute area of a triangle
    double area(double base, double height) {
        return 0.5 * base * height;
    }

    // Compute area of a circle
    double area(double radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape shape;

    // Compute area of a triangle
    double triangleBase, triangleHeight;
    std::cout << "Enter base and height of the triangle: ";
    std::cin >> triangleBase >> triangleHeight;
    double triangleArea = shape.area(triangleBase, triangleHeight);
    std::cout << "Area of the triangle: " << triangleArea << std::endl;

    // Compute area of a circle
    double circleRadius;
    std::cout << "Enter radius of the circle: ";
    std::cin >> circleRadius;
    double circleArea = shape.area(circleRadius);
    std::cout << "Area of the circle: " << circleArea << std::endl;

    return 0;
}
