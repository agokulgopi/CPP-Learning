#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5, i = 3, j = 4;

    if (a < b && ++i <= b)
    {
      // no code here
    }
    cout << i << endl;

    if (a > b || ++j <= b)
    {
        cout << j << endl;
    }

    return 0;
}