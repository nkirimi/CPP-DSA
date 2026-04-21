#include <iostream>
using namespace std;

int main() {
    const int ARRAY_SIZE = 5;
    double numbers[ARRAY_SIZE];
    double sum = 0;
    

    cout << "Please enter 5 numbers:" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
        sum += numbers[i]; 
    }
    
    
    double average = sum / ARRAY_SIZE;
    
    
    cout << "\n--- Results ---" << endl;
    cout << "Numbers entered: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << numbers[i];
        if (i < ARRAY_SIZE - 1) cout << ", ";
    }
    cout << endl;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    
    return 0;
}