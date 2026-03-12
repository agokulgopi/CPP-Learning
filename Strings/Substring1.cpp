#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[20] = "Programming";
    char str2[10] = "l";
    if (strstr(str1, str2) != NULL) {
        cout << "Substring : " << strstr(str1, str2) << endl;
    }else {
        cout << "Substring not found" << endl;
    }
    return 0;
}