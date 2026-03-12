#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[20]= "Programming";
    char str2[10] = "gram";
    cout << "Substring : " << strstr(str1, str2) << endl;
    return 0;
}