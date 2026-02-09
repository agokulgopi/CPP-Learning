#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 13;
    cout<<"a & b = "<<(a & b)<<endl; // Bitwise AND
    cout<<"a | b = "<<(a | b)<<endl; // Bitwise OR  
    cout<<"a ^ b = "<<(a ^ b)<<endl; // Bitwise XOR
    cout<<"~a = "<<(~a)<<endl; // Bitwise NOT
    cout<<"~b = "<<(~b)<<endl; // Bitwise NOT
    cout<<"a << 1 = "<<(a << 1)<<endl; // Left Shift
    cout<<"a >> 1 = "<<(a >> 1)<<endl; // Right Shift
    return 0;
}