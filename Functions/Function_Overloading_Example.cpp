//function overloading describes the ability of a single function name to be used with different types of arguments(Parameters).
#include <iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
}
float sum(float a, float b) {
    return a + b;
}
int sum(int a, int b, int c) {
    return a + b + c;
}
int main() {
    cout << sum(10, 20) << endl; // calls the first sum function
    cout << sum(10.5f, 20.5f) << endl; // calls the second sum function
    cout << sum(10, 20, 30) << endl; // calls the third sum function
    return 0;
}