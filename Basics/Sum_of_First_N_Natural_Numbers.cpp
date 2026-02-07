#include<iostream>
using namespace std;

int main(){
    int n, sum;
    cout<<"Enter a postive integer: ";
    cin>>n;
    sum = (n*(n+1))/2;
    cout<<"The sum of first "<<n<<" natural number is : "<<sum<<endl;
    return 0;
}