// String Class Functions: copy(char_des), find(), rfind(), find_first(), find_last(), substr(start, number), compare(str)

#include <iostream>
#include <string>
using namespace std;
int main() {
    //copy() function
    string str1 = "Welcome";
    char arr[10];
    str1.copy(arr, str1.length());
    cout << "Copied string: " << arr << endl;
    //find() function rfind() function
    string str2 = "Program";
    // str2.find("ram");
    cout << "Position of 'ram' in str2: " << str2.find("r") << endl; // find() start from the left side of the string.
    cout << "Position of 'ram' in str2: " << str2.rfind("r") << endl; // rfind() start from the right side of the string.
    //find_first_of() function find_last_of() function
    string str3 = "Program";
    cout << "find the first of(): " << str3.find_first_of("r") << endl; // find_first_of() start from the left side of the string and find the first occurrence of the character.
    cout << "find the last of(): " << str3.find_last_of("r") << endl; // find_last_of() start from the left side of the string and find the last occurrence of the character.
    //substr() function compare() function
    string str4 = "Promise";
    string str5 = "Pro";
    cout << "Substring of str4: " << str4.substr(3, 3) << endl; // substr(start, number_of_characters)
    cout << "Compare str4 and str5: " << str4.compare(str5) << endl;//incorrect
    //correct Method
    // if (str1.compare(str2) > 0)
    //     cout << "str1 is greater";
    //at()function
    cout << "at() function: " << str4.at(4) << endl; // at(position)
    //first() function
    cout << "first character of str4: " << str4.front() << endl; // first() function return the first character of the string.
    //back() function
    cout << "last character of str4: " << str4.back() << endl; // back() function return the last character of the string.
    //subscriptor function
    cout << "subscriptor function: " << str4[4] << endl; // subscriptor function return the character at the specified position.
    return 0;
}