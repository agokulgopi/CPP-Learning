#include <iostream>
using namespace std;
int main() {
    int n, count =0;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            count ++;
            cout << count << " ";
        }
        cout << endl;
    }
}


//pattern 1
// Enter the number of rows: 4
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16 