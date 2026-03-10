#include <iostream>
using namespace std;
int main() {
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A; // p points to the first element of the array A
    int *q = &A[3]; // q points to the fourth element of the array A (value 8)
    cout << "Address of elements of the array A:" << endl;
    for( int i = 0; i < 5; i++) {
        cout << A + i <<endl; // Address of each element in the array A
    }
    cout << "\nOperations: \n";
    p++; // Move pointer p to the next element (now points to A[1])
    cout << "p++: "<< p <<endl;
    p--;
    cout << "p--: "<< p <<endl;
    p = p + 2; // Move pointer p two elements forward (now points to A[2])
    cout << "p = p + 2: "<< p <<endl;
    p = p - 2; // Move pointer p two elements backward (now points back to A[0])
    cout << "p = p - 2: "<< p <<endl;
    int d = q - p;
    d = d / 2;
    cout << "q - p: "<< d <<endl; // Difference in the number of elements between q and p
    return 0;
}