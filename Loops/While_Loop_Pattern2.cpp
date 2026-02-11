#include <iostream>
using namespace std;
int main() {
    int number, i = 1, dn;
    cout << "Enter a number: ";
    cin >> number;
    i=number;
    while(i >= 1){
        cout<<"\n";
        dn = i;
        while(dn >= 1){
            cout << dn << " ";
            dn--;
        }
        i--;
    }
    return 0;
}