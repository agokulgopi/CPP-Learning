#include <iostream>
#include <cstring>
 using namespace std;

 int main() {
    char str[30];
    cout << "Enter a string: ";
    cin.get(str, 30); // Read string with spaces
    cout << "Length : " << strlen(str) <<endl;
    return 0;
 }