#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[10] = "478";
    char str2[10] = "47.58";
    long int a = strtol(str1, NULL, 10);
    float b = strtof(str2,NULL);
    cout << a << endl;
    cout << b << endl;
    return 0;
}