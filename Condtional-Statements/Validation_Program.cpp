#include <iostream>
using namespace std;
int main() {
    int roll_no;
    cout << "Enter your roll number: ";
    cin >> roll_no;
    if(roll_no > 0) {
        cout << "Roll number is valid." << endl;
    }
    else
    {
        cout << "Roll number is invalid." << endl;
    }
    return 0;
}