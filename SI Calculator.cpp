#include<iostream>
using namespace std;

int main(){
    float principal, rate, time, simple_interest;

    // Input principal amount, rate of interest and time period
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Rate of interest: ";
    cin >> rate;
    cout << "Enter Time period(years): ";
    cin >> time;
    // Calculate Simple Interest
    simple_interest = principal * time * rate / 100;

    cout<<"Simple interest :"<<simple_interest;

    return 0;

}