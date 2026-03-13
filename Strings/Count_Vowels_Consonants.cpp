#include <iostream>
 #include <string>
using namespace std;
int main() {
    string str = "Welcome to the world of C++ Programming";
    int vowels = 0, consonants = 0, space = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
        }
        else if (str[i] == ' ') {
            space++;
        }
        else {
            consonants++;
        } 
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    cout << "Number of spaces: " << space << endl;
    cout << "Total number of characters: " << str.length() << endl;
    cout << "words: " << space + 1 << endl;
    return 0;
}