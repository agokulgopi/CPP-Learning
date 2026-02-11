#include <iostream>
using namespace std;
int main ()
{
    int n, r, rev = 0, m;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    cout << "Number is ";
    if (rev == m)
        cout << "Palindrome";
    else
        cout << "not Palindrome";
    return 0;
}