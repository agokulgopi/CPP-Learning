#include <iostream>
using namespace std;
int main(){
    int m1, m2, m3, total;
    float avg;
    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;
    total = m1 + m2 + m3;
    avg = total / 3.0;

    if(avg >= 90) {
        cout << "Grade: A" << endl;
    }
    else if(avg >= 80) {
        cout << "Grade: B" << endl;
    }
    else if(avg >= 70) {
        cout << "Grade: C" << endl;
    }
    else if(avg >= 60) { 
        cout << "Grade: D" << endl;
    }
    else if(avg >= 40) { 
        cout << "Grade: E" << endl;  
    }
    else
    {
        cout << "Grade: F" << endl;
    }
    return 0;
}