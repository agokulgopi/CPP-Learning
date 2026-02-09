#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 12 && age <=50) {
        cout << "Young." << endl;
    }
    else{
        cout << "Not young." << endl;
    }
    if(age < 12 || age > 50) {
        cout << "Elgible for the offer." << endl;
    }
    else{
        cout << "Not Eligible for the offer." << endl;
    }
    return 0;
}