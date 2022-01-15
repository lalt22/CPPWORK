#include <iostream>

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

int main () {
    std::cout << "Testing Rectangle" << std::endl;
    Rectangle rect;
    rect.getLength();
    rect.getWidth();
    rect.setLength(5);
    rect.setWidth(4);
    rect.scaleWidth(3);
    rect.scaleLength(2);
}