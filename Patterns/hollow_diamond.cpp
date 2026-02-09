#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter the the number of lines: ";
    cin>>n;

    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n - i -1; j ++){
            cout<<" ";
        }
        cout<<"*";
        if(i != 0){
            for(j = 0; j< 2*i-1; j++){
                cout<<" ";
            }
            cout<<"*";

        }

        cout<<endl;
    }
    //lines
    for(i = 0 ; i < n -1  ; i++){
        //spaces
        for(j = 0 ; j < i + 1; j ++){
            cout<<" ";
        }
        cout<<"*";

        if(i != n - 2){
            for(j = 2*(n-2- i) - 1; j > 0; j--){
                cout<<" ";
            }
            cout<<"*";
        }

        cout<<endl;
    }
    

    return 0;
}