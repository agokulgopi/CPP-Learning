// string functions : length(), size(), capacity(), resize(), max_size(), clear(), empty()
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    str1 = "Hello World";
    str2 = "Welcome to C++ programming";
    cout << "Length of str1: " << str1.length() << endl;
    cout << "Length of str2: " << str2.length() << endl;
    cout << "Size of str1: " << str1.size() << endl;
    cout << "Size of str2: " << str2.size() << endl;
    cout << "Capacity of str1: " << str1.capacity() << endl;
    cout << "Capacity of str2: " << str2.capacity() << endl;
    cout << "Max size of str1:  " << str1.max_size() << endl;
    cout << "Max size of str2: " << str2.max_size() << endl;
    str1.resize(40);
    cout << "Resized str1: " << str1.capacity() << endl;
    str1.clear();
    cout << "Cleared str1: " << str1.length() << endl;
    if(!str1.empty()) {
        cout << "str1 is not empty" << endl;
    }
    else {
        cout << "str1 is empty" << endl;
    }
    if(!str2.empty()) {
        cout << "str2is not empty" << endl;
    }
    else {
        cout << "str2is empty" << endl;
    }
}