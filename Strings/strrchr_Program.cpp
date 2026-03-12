// `strrchr()` returns a **pointer** to the last 'n'
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[10] = "Running";
    cout << "Last n: " << strrchr(str1, 'n') << endl;
    cout << "Last R: " << strrchr(str1, 'R') <<endl;
    cout << "Last i: " << strrchr(str1, 'i') << endl;
    return 0;
}