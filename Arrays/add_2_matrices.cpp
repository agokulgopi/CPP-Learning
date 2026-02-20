#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;
    int matrix1[n][m], matrix2[n][m], sum[n][m];
    cout << "Enter elements of first matrix: " << endl;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of second matrix: " << endl;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Sum of the two matrices: " << endl;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}