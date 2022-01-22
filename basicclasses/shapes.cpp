#include <iostream>
#include <math.h>

#include "shapes.hpp"

Rectangle::Rectangle() {
    setWidth(1);
    setLength(2);
}

Rectangle::~Rectangle() {

}

int Rectangle::getWidth() {
    std::cout<< "Width is " << width << std::endl;
    return width;
}

int Rectangle::getLength() {
    std::cout<< "Length is " << length << std::endl;
    return length;
}

void Rectangle::setWidth(int widthNew) {
    width = widthNew;
    std::cout<< "Width is now " << width << std::endl;
}

void Rectangle::setLength(int lengthNew) {
    length = lengthNew;
    std::cout<< "Length is now " << length << std::endl;
}

void Rectangle::scaleLength(int scale) {
    length = length * scale;
    std::cout<< "Length is now scaled as " << length << std::endl;
}

void Rectangle::scaleWidth(int scale) {
    width = width * scale;
    std::cout<< "Width is now scaled as " << width << std::endl;
}

void Rectangle::draw() {
    
}

Circle::Circle(){
    setRadius(2);
    setCircumf(2);
}

Circle::~Circle() {

}

int Circle::getRadius() {
    return radius;
}

int Circle::getCircumference() {
    return circumference;
}

void Circle::setRadius(int radNew) {
    radius = radNew;
}

void Circle::setCircumf(int rad) {
    circumference = 2 * M_PI * rad;
}

int Circle::calculateRadius(int circumf) {
    radius = circumf / (M_PI * 2);
    return radius;
}

