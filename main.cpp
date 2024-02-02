#include "circle.h"

int main() {
    Circle myCircle;

    // Demonstrate methods
    myCircle.move(1, 1);   // Move the circle
    myCircle.resize(1);  // Resize the circle
    myCircle.print();  // Print updated values
    myCircle.read();   // Prompt user for input
    myCircle.print();  // Print entered values
    return 0;
}
