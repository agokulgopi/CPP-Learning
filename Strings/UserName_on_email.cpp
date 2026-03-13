// How to find the username from an email address in C++?
#include <iostream>
#include <string>
using namespace std;
int main() {
    string email = "tommy6@example.com";
    int i = (int) email.find('@'); // find the position of '@' in the email address
    string uname = email.substr(0,i);

    cout << "Email is: " << email << endl;
    cout << "Username is: " << uname << endl;
    return 0;
}