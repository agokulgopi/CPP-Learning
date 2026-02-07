#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float radius, height, volume;
    cout<<"Enter the radius and height of the cylinder: ";
    cin>>radius>>height;
    volume =3.1424f * radius * radius * height; // Volume of a cylinder = πr^2h
    cout<<"The volume of the cylinder is : "<<volume<<endl;
    return 0;
}