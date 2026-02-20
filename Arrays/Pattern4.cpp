#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j >= n - 1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}


//pattern 4
// Enter the number of rows: 5
//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 