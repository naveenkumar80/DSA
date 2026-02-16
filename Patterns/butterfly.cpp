#include<iostream>
using namespace std;

int main()
{
    int i, j , n;
    cout<<"enter the number of lines :";
    cin>>n;
    for(i = 0; i < n ; i++){
        for(j = 0 ; j < i + 1; j++ ){
            cout<<"*";
        }
        for(j = 0; j < 2 * (n - i - 1) ; j++){
            cout<<" ";
        }
        for(j = 0 ; j < i + 1; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i = 0; i < n - 1 ; i++){
        for(j = 0 ; j < n - i; j++ ){
            cout<<"*";
        }
        
        for(j = 0; j < 2 * (i) - 1 ; j++){
            if ( i != 0){
                cout<<" ";
            }
        }
        for(j = 0 ; j < n - i ; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}