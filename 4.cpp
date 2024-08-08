#include <iostream>
#include<cmath>
using namespace std;
class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h, double w) : height(h), width(w) {}

    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    double area() override {
        return height * width;
    }

    double perimeter() override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}

    double area() override {
        return 0.5 * height * width;
    }

    double perimeter() override {
    	return 0.0;
    }
    
};

int main() {
    Rectangle rect(5, 10);
    Triangle tri(5, 10);

    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Rectangle Perimeter: " << rect.perimeter() << endl;

    cout << "Triangle Area: " << tri.area() << endl;


    return 0;
}












