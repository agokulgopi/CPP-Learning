#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1 = "MORNING";
    for ( int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] >= 65 && str1[i] <= 90) {
            str1[i] = str1[i] + 32; //upper case letter to + 32
        }
    }
    cout << str1 << endl;
    return 0;
}