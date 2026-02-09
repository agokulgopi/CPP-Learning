#include <iostream>
using namespace std;
enum day {Monday = 1, Tuesday, Wednesday, Thursday = 4, Friday, Saturday = 9, Sunday};
enum department {CS = 1, IT, ECE, CIVIL, MECH, AERO};
int main() {
    day d1, d2;
    department dept1, dept2;

    d1 = Monday;
    d2 = Thursday;
    dept1 = CIVIL;
    dept2 = ECE;

    cout<<"Value of d1: "<<d1<<endl; // Output: 1
    cout<<"Value of d2: "<<d2<<endl; // Output: 4 
    cout<<"Value of dept1: "<<dept1<<endl; // Output: 4
    cout<<"Value of dept2: "<<dept2<<endl; // Output: 3
    return 0;
}