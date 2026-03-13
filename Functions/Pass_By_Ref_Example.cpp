#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "Before Swap:\n";
    cout << "x: " << x << " y: " << y << endl;
    swap (x, y);
    cout << "After Swap:\n";
    cout << "x: " << x << " y: " << y << endl;
}