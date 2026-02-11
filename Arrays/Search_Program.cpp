#include <iostream>
using namespace std;
int main() {
    int num_of_items;
    cout << "Enter number of items you want to insert in an array: ";
    cin >> num_of_items;
    int items[num_of_items];
    cout << "Enter " << num_of_items << " items: ";
    for (int i = 0; i < num_of_items; i++) {
        cin >> items[i];
    }
    int search_item;
    cout << "Enter item you want to search: ";
    cin >> search_item;
    for(int i:items) {
        if (i == search_item) {
            cout << "Item found in the array.";
            return 0;
        }
    }
    cout << "Item not found in the array.";
    return 0;
}