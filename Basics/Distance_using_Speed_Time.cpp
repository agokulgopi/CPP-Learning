#include<iostream>
using namespace std;

int main(){
    float speed, distance, time;
    cout<<"Ente the Speed (in km/h) and Time (in hours): ";
    cin>>speed>>time;
    distance = speed * time; // Distance = Speed * Time 
    cout<<"The distance traveled is : "<<distance<<" km"<<endl;
    return 0;
}