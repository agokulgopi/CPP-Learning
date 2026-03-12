// String Class Functions: append(), insert(), replace(), erase(), push_back(), pop_back(), swap()

#include <iostream>
#include <string>
using namespace std;
int main() {
    //append() function
    string str1 = "Hello ";
    cout << "String before append: " << str1 << endl;
    cout << "String before append: " << str1.capacity() << endl;
    str1.append("World, Welcome to C++ programming" );
    cout << "String after append: " << str1 << endl;
    cout << "String after append: " << str1.capacity() << endl;
    //insert() function
    string str2 = "Hello ";
    cout << "String before insert: " << str2 << endl;
    cout << "String before insert: " << str2.capacity() << endl;
    str2.insert(0,"Hi ");
    str2.insert(9,"World, How  you? ");
    cout << "String after insert: " << str2 << endl;
    cout << "String after insert: " << str2.capacity() << endl;
    cout << "Length: " << str2.length () << endl;
    str2.insert (20,"area", 3);
    cout << "String after insert: " << str2 << endl;
    //replace() function
    string str3 = "Program";
    cout << "String before replace: " << str3 << endl;
    // str3.replace(0, 3, "Coding");
    str3.replace(3, 4, "mise");
    cout << "String after replace: " << str3 << endl;
    //erase() function
    string str4 = "Hello World";
    cout << "String before erase: " << str4 << endl;
    str4.erase(5, 6); //erase(position, number_of_characters)
    cout << "String after erase: " << str4 << endl;
    str4.erase();
    if ( str4.empty()) {
        cout << "String is empty" << endl;
    }
    else {
        cout << "String is not empty" << endl;
    }
    //pop_back() push_back() function
    string str5 = "Program";
    cout << "String5: " << str5 << endl;
    str5.push_back('s');
    cout << "String5 after push_back: " << str5 << endl;
    str5.pop_back();
    cout << "String5 after pop_back: " << str5 << endl;
    //swap() function
    string str6 = "Malayalam";
    string str7 = "Tamil";
    cout << "Before swap: " << endl;
    cout << "String6: " << str6 << endl;
    cout << "String7: " << str7 << endl;
    str6.swap(str7);
    cout << "After swap: " << endl;
    cout << "String6: " << str6 << endl;
    cout << "String7: " << str7 << endl;
}