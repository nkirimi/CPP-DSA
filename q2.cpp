#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    
    double radius;
    
    cout << "Enter radius of sphere: ";
    cin >> radius;
    
    double radius_cubed = pow(radius, 3);
    
    // Calculate volume: (4/3) * π * r^3
    double volume = (4.0 / 3.0) * M_PI * radius_cubed;
    
    // Display result
    cout << "Volume of sphere with radius " << radius << " = " << volume << endl;
    
    return 0;
}