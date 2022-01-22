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

