#include <iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter Day Number: ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Day is Sunday" << endl;
        break;
    case 2:
        cout << "Day is Monday" << endl;
        break;
    case 3:
        cout << "Day is Tuesday" << endl;
        break;
    case 4:
        cout << "Day is Wednesday" << endl;
        break;
    case 5:
        cout << "Day is Thursday" << endl;
        break;
    case 6:
        cout << "Day is Friday" << endl;
        break;
    case 7:
        cout << "Day is Saturday" << endl;
        break;
    default:
        cout << "Invalid Day Number" << endl;
    }
    return 0;
}