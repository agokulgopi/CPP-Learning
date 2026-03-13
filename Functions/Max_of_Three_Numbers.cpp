#include <iostream>
using namespace std;
int Maximum(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}
int main() {
    int x = 10, y = 20, z = 15, max;
    max = Maximum(x,y,z);
    cout << "Max = " << max << endl;
    return 0;
}