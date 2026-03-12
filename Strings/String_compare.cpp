#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[10] = "Hello";
    char str2[10] = "HEllo";
    cout << "strcmp : " << strcmp(str1, str2) << endl;
    return 0;
}