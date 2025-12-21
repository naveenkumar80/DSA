#include<iostream>
using namespace std;
int main(){
    int number, i, j;

    cout<<"enter the number of lines you want to print :"<<endl;
    cin>>number;

    for(i=0; i<number ; i++){
        for( j=1; j <= number; j++){
            cout<<j;
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}