#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int length, width;
    float area, perimeter;
    cout<<"Enter the length of the rectangle: ";
    cin>>length;
    cout<<"Enter the width of the rectangle: ";
    cin>>width;

    area = float(length*width);
    perimeter = float(2*(length+width));
    cout<<"Area of the rectangle is: "<<area<<endl;
    cout<<"Perimeter of the rectangle is: "<<perimeter<<endl;
    return 0;
}