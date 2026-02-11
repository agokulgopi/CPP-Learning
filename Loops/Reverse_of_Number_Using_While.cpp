#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    int reverse = 0, remainder;
    while(N != 0) {
        remainder = N % 10;
        reverse = reverse * 10 + remainder;
        N /= 10;
    }
    cout << "Reverse of the number is: " << reverse;
    return 0;
}