#include<iostream>
using namespace std;

int main(){
    float base, height, area;
    cout<<"Enter the base of the triangle: ";
    cin>>base;
    cout<<"Enter the height of the triangle: ";
    cin>>height;
    // Area of triangle is calculated using the formula: (base * height) / 2
    area = (base * height) / 2;
    cout<<"The area of the triangle is: "<<area<<endl;
    return 0;
}