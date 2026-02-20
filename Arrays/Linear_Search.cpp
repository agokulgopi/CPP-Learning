#include <iostream>
using namespace std;
int main() {
    int n, key;
    cout << "Enter number of elements you want to insert in an array: ";
    cin >> n;
    cout<<endl;
    int array[n];
    cout << "Enter " << n << " elements: ";
    for( int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "Enter the element you want to search: ";
    cin >> key;
    cout << endl;
    for ( int i = 0; i < n; i++) {
        if (array[i] == key) {
            cout << "Element found at index: " << i+1 << endl;
            return 0; // Exit after finding the element
        }
    }
    cout << "Element not found in the array." << endl;
    return 0;
}