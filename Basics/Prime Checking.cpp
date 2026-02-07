#include <iostream>
using namespace std;

int main(){
    int i,n;
    bool isPrime;
    char choice;
    do{
        isPrime = true;
        cout<<"Enter a positive Integer: ";
        cin>>n;
        

        if(n == 0 || n == 1){
            isPrime = false;
        }
        else{
            for(i = 2; i <= n/2; i++){
                if(n % i == 0){
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime){
            cout<<n<<" is a prime number."<<endl;    
        }
        else{
            cout<<n<<" is not a prime number."<<endl;
        }
        cout<<"Do you want to check another number? (y/n): ";
        cin>>choice;
        cout<<endl;
    }while(choice == 'y' || choice == 'Y');

    cout<<"Exiting the program. Goodbye!"<<endl;
    return 0;
}
