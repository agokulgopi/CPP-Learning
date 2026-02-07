#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int u, v,a;
    cout<<"Enter the initial velocity (u), final velocity (v) and acceleration (a): ";
    cin>>u>>v>>a;
    // Using the formula v^2 = u^2 + 2a to calculate displacement (s)
    float s = (v*v - u*u)/(2*a);
    cout<<"The displacement is: "<<s<<endl;
}