#include <iostream>
using namespace std;
float addTwoNumbers(float a, float b) {
    float z;
    z = a + b;
    return z;
}
int main() {
    float num1 = 12.3, num2 = 14.5, sum;
    sum = addTwoNumbers(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    return 0;
}