#include <iostream>
using namespace std;
int main()
{
    int n, m, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int *A = new int[n];
    cout << "\nEnter Elements of Array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    cout << "\nAverage: " << (float) sum / n;
}