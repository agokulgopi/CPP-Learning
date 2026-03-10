#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *ptr = new int[size]; // Dynamically allocate memory for an integer array
    cout << "Enter " << size << " integers:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> ptr[i]; 
    }
    cout << "Elements in the array are:" << endl;
    for( int i = 0; i < size; i++) {
        cout << ptr[i] << endl;
    }
    delete[] ptr; // Deallocate the memory
    ptr = nullptr; // Avoid dangling pointer
    return 0;
}