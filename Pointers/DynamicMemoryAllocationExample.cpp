#include <iostream>
using namespace std;
int main() {
    int *ptr = new int[10]; // Dynamically allocate memory for an integer
    //store values
    for(int i = 0; i < 10; i++) {
        ptr[i] = i; 
    }

    for( int i = 0; i < 10; i++) {
        cout << ptr[i] << endl; 
    }
    
    delete[] ptr;
    ptr = nullptr; // Avoid dangling pointer
    return 0;
}