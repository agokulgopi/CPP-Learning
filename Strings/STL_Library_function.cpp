#include <bits/stdc++.h>
using namespace std;
string IsPalindrome(string str) {
    string str2 = str;
    reverse(str.begin(), str.end());
    if (str == str2) {
        return "Yes, It is Palindrome.";
    }
    else {
        return "Not a palindrome.";
    }
}
int main() {
    string s = "NAMAN";
    cout << IsPalindrome(s) << endl;
    return true;
}


// #include <bits/stdc++.h>
// using namespace std;

// // Function to check whether the string is palindrome or not
// string IsPalindrome (string Str)
// {
//     // Iterate over the Range [0, N/2]
//     for (int i = 0; i < Str.length () / 2; i++)
//     {
//         // If Str[i] is not equal to the Str[N-i-1]
//         if (Str[i] != Str[Str.length () - i - 1])
//         {
//             // Return Not a Palindrome
//             return "Not a Palindrome";
//         }
//     }
//     // Return "Palindrome"
//     return "Palindrome";
// }

// int main()
// {
//     string S = "NAMAN";
//     cout << IsPalindrome (S);
//     return 0;
// }