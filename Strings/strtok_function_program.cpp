#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[20] = "a=4;b=6";
    char *token = strtok(str, "=;");
    while(token != NULL){
        cout << token << endl;
        token = strtok(NULL, "=;");
    }
}