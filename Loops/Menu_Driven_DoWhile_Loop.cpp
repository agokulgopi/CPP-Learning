#include <iostream>
using namespace std;
int main() {
    char choice;
    int menuoption, a, b;
    do{
        cout << "Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
        cout << "Enter your choice: ";
        cin >> menuoption;
        switch(menuoption) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a + b << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a - b << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a * b << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if(b != 0) {
                    cout << "Result: " << a / b << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Invalid option! Please try again." << endl;
        }
        cout << "Do you want to continue? (y/n): "<<endl;
        cin >> choice;
    }while(choice == 'y' || choice == 'Y');
    return 0;
}