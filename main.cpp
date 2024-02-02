#include "circle.h"

int main() {
    Circle myCircle;

    // Demonstrate methods
    myCircle.move(1, 1);   // Move circle
    myCircle.resize(1);  // Resize circle
    myCircle.print();  // Print values
    myCircle.read();   // Prompt user
    myCircle.print();  // Print new values
    return 0;
}
