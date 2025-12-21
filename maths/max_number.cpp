#include<iostream>
using namespace std;
int main(){
    int num1, num2;

    cout<<"Enter the 1st number:"<<endl;
    cin>>num1;
    cout<<"Enter the 2st number:"<<endl;
    cin>>num2;

    if (num1 <= num2){
        cout<<num2;
    }
    else{
        cout<<num1;
    }
    return 0;
}