#include <iostream>
using namespace std;
template <class T>
T Max(T a, T b) {
    return a > b ? a : b;
}
int main() {
    cout << Max(12, 14) << endl;
    cout << Max(12.5, 14.5) << endl;
    cout << Max('A', 'B') << endl;
    return 0;
}