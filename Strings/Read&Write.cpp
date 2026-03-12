// Reading the space between the name
#include <iostream>
using namespace std;

int main() {
    char s1[30], s2[30];
    cout << "Enter your names: ";
    cin.get(s1, 30); // Read string with spaces
    cin.ignore(); // Ignore the newline character left in the buffer
    cin.get(s2, 30); // Read another string with spaces
    cout << "Welcome "<< s1 << " and " << s2 << "!" << endl;
    return 0;
}