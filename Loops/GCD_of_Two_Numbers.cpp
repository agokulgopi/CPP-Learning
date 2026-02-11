#include <iostream>
using namespace std;
int main() {
    int m, n;
    cout << "Enter two numbers: ";
    cin >> m >> n;

    // Handle negative numbers
    if(m < 0) m = -m;
    if(n < 0) n = -n;
    
    // Handle if both are 0
    if(m == 0 && n == 0) {
        cout << "GCD is undefined (both numbers are 0)" << endl;
        return 0;
    }
    
    while(n != 0) {         
        int temp = n;
        n = m % n;          
        m = temp;
    }

    cout << "GCD is: " << m << endl;
    return 0;
}