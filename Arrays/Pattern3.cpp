#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if (i > j)
           {
              cout << "  ";
           }
           else
           {
              cout << "* ";
           }
        }
        cout << endl;
    }
}

//pattern 3
// Enter Number: 5
// Enter Number: 5
// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 