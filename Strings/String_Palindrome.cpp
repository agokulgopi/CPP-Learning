#include <iostream>
#include <string>
using namespace std;
int main () {
    string str = "MADAM";
    string rev = "";
    int i, j;
    int len = (int) str.length();
    rev.resize(len);
    for (i = 0, j = len - 1;  i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[len] = '\0';
    cout << "String is : " << str << endl;
    cout << "Reverse of the string is : " << rev << endl;
    if(str.compare(rev) == 0) {
        cout << "String is a palindrome." << endl;
    }
    else {
        cout << "String is not a palindrome." << endl;
    }
    return 0;
}