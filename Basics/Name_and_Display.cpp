#include <iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter Your Name: ";
    getline(cin, name);
    //cin>>name; 
    //cin read only the first word, so if the user enters "John Doe", it will only read "John". To read the full name, we can use getline() function which reads the entire line of input including spaces.
    cout<<"Hello, "<<name<<"! Welcome to C++ programming."<<endl;
    return 0;
}