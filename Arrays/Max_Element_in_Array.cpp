#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements you want to insert in an array: ";
    cin >> n;
    int array[n];
    cout << "Enter " << n << " elements: ";
    
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    // Find maximum - initialize with first element
    int max = array[0];  // ✓ Fixed: Initialize with first element
    for (int i = 1; i < n; i++) {  // ✓ Fixed: Start from index 1
        if (array[i] > max) {  // ✓ Fixed: Check all elements
            max = array[i];
        }
    }
    cout << "Maximum element in the array is: " << max << endl;
    return 0;
}