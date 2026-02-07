#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a, b, c, r1, r2, discriminant;
    cout<<"Enter the coefficients a, b and c of the quadratic equation (ax^2 + bx + c = 0): ";
    cin>>a>>b>>c;

    discriminant = b*b - 4*a*c;

    if(discriminant > 0){
        //Two distinct real roots
        r1 = (-b + sqrt(discriminant))/(2*a);
        r2 = (-b - sqrt(discriminant))/(2*a);
        cout<<"The roots of the quadratic equation are: "<<r1<<" and "<<r2<<endl;
    }
    else if(discriminant == 0){
        //One real root repeated
        r1 = -b/(2*a);
        cout<<"The root of the quadratic equation is: "<<r1<<endl;
    }
    else{
        //Complex roots
        float realPart = -b/(2*a);
        float imaginaryPart = sqrt(-discriminant)/(2*a);
        cout<<"The roots are complex: "<<endl;
        cout<<"Root 1: "<<realPart<<" + "<<imaginaryPart<<"i"<<endl;
        cout<<"Root 2: "<<realPart<<" - "<<imaginaryPart<<"i"<<endl;
    }

    
    return 0;
}