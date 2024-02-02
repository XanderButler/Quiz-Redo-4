#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    int x, y;
    float radius;

public:
    // constructors
    Circle();

    // methods
    void move(int x, int y);
    void resize(float radius);
    void read();
    void print();
};

#endif
