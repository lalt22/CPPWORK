#include <iostream>
#include <math.h>

class Rectangle {
    public:
        Rectangle();
        ~Rectangle();
        int getWidth();
        int getLength();
        void setWidth(int widthNew);
        void setLength(int lengthNew);
        void scaleWidth(int scale);
        void scaleLength(int scale);
        void draw();
    private:
        int length;
        int width;
};

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

class Circle {
    public:
    Circle();
    ~Circle();
    int getRadius();
    int getCircumference();
    void setRadius(int radNew);
    void setCircumf(int rad);
    int calculateRadius(int circumf);
    private:
    int radius;
    int circumference;
};

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