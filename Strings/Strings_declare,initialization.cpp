// Basic String declaration and initialization in C++
#include <iostream>
#include <stdio.h>

int main() {
    char c = 'z'; // Single character
    char S[10] = "Hello"; // String of characters (array of chars)
    char A[] = "World"; // String of characters (array of chars, size determined by initializer)
    char B[] = { 'R', 'o', 'h', 'a', 'n', '\0' };
    char C[] = { 82, 111, 104, 97, 110, '\0' }; // with ASCII codes
    char *D = "Rohan"; // String literal (pointer to char)

    printf("Character c: %c\n", c);
    printf("String S: %s\n", S);
    printf("String A: %s\n", A);
    printf("String B: %s\n", B);
    printf("String C: %s\n", C);
    printf("String D: %s\n", D);
    return 0;
}
