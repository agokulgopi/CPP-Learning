#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float radius, area;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;

    area = 3.1424f  * radius * radius; // Area of a circle = πr^2

    cout<<"The area of the circle with radius "<<radius<<" is: "<<area<<endl;

    return 0;
}