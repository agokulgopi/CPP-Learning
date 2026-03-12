#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[10] = " ";
    char str2[10] = "Welcome";
    strcpy(str1, str2);
    cout << "Copied String : " << str1 << endl;
    return 0;
}