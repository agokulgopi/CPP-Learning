#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float principal, rate, time, simple_interest, total_amount;
    cout<<"Enter the principal amount: ";
    cin>>principal;
    cout<<"Enter the rate of interest (in percentage): ";
    cin>>rate;
    cout<<"Enter the time (in years): ";
    cin>>time;
    
    simple_interest = (principal * rate * time) / 100;
    total_amount = principal + simple_interest;

    //total_amount = principal * (1 + (rate * time / 100)); ANOTHER METHOD TO CALCULATE TOTAL AMOUNT(SIMPLE INTEREST + PRINCIPAL AMOUNT)

    cout<<"The simple interest is: "<<simple_interest<<endl;
    cout<<"The total amount is: "<<total_amount<<endl;

    return 0;
}

// Simple interest is calculated using the formula:

// A [Total accrued amount (Both principal and the interest)] = Principal Amount (1 + (Rate of Interest * Time / 100))

// Another method:

// simple interest = (Principal Amount * Rate of Interest * Time) / 100 (this formula find the interest rate at that time period)

// total amount = paircipal amount + simple interest
