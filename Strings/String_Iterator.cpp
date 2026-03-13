// String iterator in c++: begin(), end(), rbegin(), rend(), reverse_iterator()
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "Hello";
    string::iterator it;
    for(it = str.begin(); it != str.end();it++) {
        cout << *it;
    }
    cout << endl;
    //Upper case:
    string str1 = "young";
    string::iterator it1;
    for(it1 = str1.begin(); it1 != str1.end(); it1++) {
        *it1 = *it1 - 32; //lower case letter to - 32
    }
    cout << "Upper case: " << str1;
    cout << endl;
    //reverse iterator
    string str2 = "Hello";
    string:: reverse_iterator it2;
    for(it2 = str2.rbegin(); it2 != str2.rend(); it2++) {
        cout << *it2;
    }
    cout << endl;
    return 0;
}