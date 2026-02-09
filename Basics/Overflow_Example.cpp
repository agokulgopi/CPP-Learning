#include <iostream>
using namespace std;

int main() {
    char a = 128;
    cout<<"Value of a is: "<<(int)a<<endl;
    char b = 127;
    b++;
    cout<<"Value of b is: "<<(int)b<<endl;
    char c = -129;
    cout<<"Value of c is: "<<(int)c<<endl;
    char d = -128;
    d--;
    cout<<"Value of d is: "<<(int)d<<endl;
    int e = INT_MAX;
    e++;
    cout<<"Value of e is: "<<e<<endl;
    return 0;
}