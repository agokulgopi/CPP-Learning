#include <iostream>
using namespace std;
int Sum(int x, int y, int z = 0)
{
    return x + y + z;
}

int Max(int a = 0, int b = 0, int c = 0)
{
    return a > b && a > c ? a : (b > c ? b : c);
}

int main()
{
    cout << Sum(10, 20, 3) << endl;
    cout << Sum(10, 20) << endl;
    cout << Max(13, 22, 53) << endl;
    cout << Max(22, 53) << endl;
    return 0;
}