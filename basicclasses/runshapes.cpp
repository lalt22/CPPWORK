#include <iostream>

#include "shapes.hpp"

int main () {
    std::cout << "Testing Rectangle" << std::endl;
    Rectangle rect;
    rect.getLength();
    rect.getWidth();
    rect.setLength(5);
    rect.setWidth(4);
    rect.scaleWidth(3);
    rect.scaleLength(2);

    std::cout << "Testing Circle" << std::endl;
    Circle circle;
    int radius = circle.getRadius();
    int circumf = circle.getCircumference();
    std::cout << "Radius is " << radius << " and Circumference is " << circumf << std::endl;


}