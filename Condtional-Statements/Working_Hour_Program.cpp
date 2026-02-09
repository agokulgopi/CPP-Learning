#include <iostream>
using namespace std;
int main() {
    int hours;
    cout << "Enter the number of hours worked: ";
    cin >> hours;
    if(hours >= 9 && hours <= 18) {
        cout << "Working hours." << endl;
    }
    else
    {
        cout << "Leisure hours." << endl;
    }
}