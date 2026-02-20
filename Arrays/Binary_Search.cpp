#include <iostream>
using namespace std;
int main() {
    int n, low, mid, high, key;
    cout << "Enter number of elements you want to insert in an array: ";
    cin >> n;
    cout << endl;
    int array[n];
    cout << "Enter " << n << " elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "Enter the key element: ";
    cin >> key;
    cout << endl;
    low = 0;
    high = n - 1;
    while(low <= high){
        mid = (low + high) / 2;
        if (array[mid] == key) {
            cout << "Element found at index: "<< mid + 1 << endl;
            return 0;
        }
        else if ( key < array[mid]) {
            high = mid - 1;
        
        }
        else {
            low = mid + 1;
        }
    }
    cout << "Element not found in the array." << endl;
    return 0;
}