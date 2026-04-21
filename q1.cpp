#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter number of days: ";
    cin >> days;

    // 1 day = 24 hrs * 60 mins * 60 secs
    long long seconds = days * 24 * 60 * 60;

    cout << days << " day(s) = " << seconds << " seconds" << endl;
    return 0;
}