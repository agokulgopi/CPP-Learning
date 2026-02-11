#include <iostream>
using namespace std;
int main() {
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    for(int i = 1; i <= number; i++) {
        sum += i;
    }
    cout << "Sum of numbers from 1 to " << number << " is: " << sum << endl;
    return 0;
}