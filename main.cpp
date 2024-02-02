#include "circle.h"

int main() {
    Circle myCircle;

    // demonstrate methods
    myCircle.move(1, 1);   // move circle
    myCircle.resize(1);  // resize circle
    myCircle.print();  // print values
    myCircle.read();   // prompt user
    myCircle.print();  // print new values
    return 0;
}
