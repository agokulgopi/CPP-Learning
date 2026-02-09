#include <iostream>
using namespace std;
int main() {
    float bill_amount, discount = 0.0, final_amount;
    cout << "Enter the bill amount: ";
    cin >> bill_amount;
    if (bill_amount > 1000) {
        discount = bill_amount * 0.10; // 10% discount
    }
    else if (bill_amount > 500) {
        discount = bill_amount * 0.05; // 5% discount
    }
    final_amount = bill_amount - discount;
    cout << "\nBill Amount: " << bill_amount << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Bill Amount: " << final_amount << endl;
    return 0;
}