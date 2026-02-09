#include <iostream>
using namespace std;
int main ()
{
    int a, b, choice;
    float result;
    cout << "enter the value of a and b:\t" << endl;
    cin >> a >> b;
    cout <<"enter the choice \n"<< "1. for addition \n" <<"2. for subtraction \n" <<"3. for multiplication \n" << "4. for division" << endl;
    cin >> choice;
    switch (choice)
    {
        case 1:
            result = a + b;
            cout << "sum of two num is:\t" << result << endl;
            break;
        case 2:
            result = a - b;
            cout << "difference of two num is:\t" << result << endl;
            break;
        case 3:
            result = a * b;
            cout << "product of two num is:\t" << result << endl;
            break;
        case 4:
            result = a / b;
            cout << "division of two num is:\t" << result << endl;
            break;
        default:
            cout << "you have entered a wrong choice." << endl;
    }
}