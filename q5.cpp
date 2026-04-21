#include <iostream>
using namespace std;

int main() {
    
    double x = 0;
    int y = 20;
    
    while (y >= 6) { 
        y = y - 4;
        x = x + (2.0 / y);
    }
    

    cout << "Final value of x = " << x << endl;
    
    return 0;
}