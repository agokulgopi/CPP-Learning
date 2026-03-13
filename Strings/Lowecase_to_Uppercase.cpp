#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "morning";
    for ( int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <=122) {
            str[i] = str[i] - 32; //lower case letter to - 32
        }
    }
    cout << str << endl;
    return 0;
}