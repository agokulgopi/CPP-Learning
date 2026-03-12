#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter the first String: ";
    getline(cin, str1);
    cout << "Enter the second String: ";
    getline(cin, str2);
    cout << "The First String is: " << str1 << endl;
    cout << "The Second String is: " << str2 << endl;
    return 0;
}