#include "circle.h"
#include <iostream>

// default constructor
Circle::Circle() : x(0), y(0), radius(1.0) {}

// methods
void Circle::move(int x, int y) {
    this->x = x;
    this->y = y;
}

void Circle::resize(float radius) {
    this->radius = radius;
}

void Circle::read() {
    std::cout << "Enter x coordinate: ";
    std::cin >> x;
    std::cout << "Enter y coordinate: ";
    std::cin >> y;
    std::cout << "Enter radius: ";
    std::cin >> radius;
}

void Circle::print() {
    std::cout << "Center: (" << x << ", " << y << ")\n";
    std::cout << "Radius: " << radius << "\n";
}
