#include <iostream>
using namespace std;
int main(){
    int i=1,n,in;
    cout<<"Enter the number: ";
    cin>>n;
    while(i<=n){
        cout<<"\n";
        in=1;
        while(in<=i){
            cout<<in<<" ";
            in++;
        }
        i++;
    }
    return 0;
}