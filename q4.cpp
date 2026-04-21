#include <iostream>
using namespace std;

// Function to check if character is uppercase
void checkCase(char ch) {
    if (isupper(ch)) {
        cout << "'" << ch << "' is an UPPERCASE letter" << endl;
    }
    else if (islower(ch)) {
        cout << "'" << ch << "' is a LOWERCASE letter" << endl;
    }
    else {
        cout << "'" << ch << "' is not a letter" << endl;
    }
}

int main() {
    char inputChar;
    
    
    cout << "Enter a character: ";
    cin >> inputChar;

    checkCase(inputChar);
    
    return 0;
}