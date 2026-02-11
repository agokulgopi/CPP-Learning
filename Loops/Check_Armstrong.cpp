#include <iostream>
using namespace std;
int main() {
    int number, sum = 0, remainder;
    cout << "Enter a number: ";
    cin >> number;
    int originalNumber = number;
    while(number != 0) {
        remainder = number % 10;
        sum += remainder * remainder * remainder;
        number /= 10;
    }
    if(sum == originalNumber) {
        cout << originalNumber << " is an Armstrong number." << endl;
    } else {
        cout << originalNumber << " is not an Armstrong number." << endl;
    }
}