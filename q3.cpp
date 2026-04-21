#include <iostream>
using namespace std;

// Area of square
double calculateArea(double side) {
    return side * side;
}

// Perimeter of square
double calculatePerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;
    
    cout << "Enter side length of square: ";
    cin >> side;
    
    double area = calculateArea(side);
    double perimeter = calculatePerimeter(side);
    
    cout << "Square with side " << side << ":" << endl;
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    
    return 0;
}