#include <iostream>
using namespace std;
int main(){
    int num_of_elements, sum = 0;
    cout << "Enter number of elements you want to insert in an array: ";
    cin >> num_of_elements;
    int elements[num_of_elements];
    cout << "Enter " << num_of_elements << " elements: ";
    for (int i = 0; i < num_of_elements; i++) {
        cin >> elements[i];
        sum += elements[i];
    }
    cout << "Sum of elements in the array is: " << sum;
    return 0;
}