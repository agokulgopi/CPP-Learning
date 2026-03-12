#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[10] = "Welcome";
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    cout << "Length : " << count << endl;
    return 0;
}

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
//     char str[10];
//     cout << "Enter a string: ";
//     cin.get(str, 10);
//     int count = 0;
//     for(int i = 0; str[i] != '\0'; i++) {
//         count++;
//     }
//     cout << "Length : " << count << endl;
//     return 0;
// }