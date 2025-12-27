#include<iostream>
using namespace std;

int main()
{
    int n = 6, i , j ;
    for ( i = n ; i > 0 ; i--){
        for(j = 0 ; j < i; j++){
            cout<<"*"<<" ";
        }
        n--;
        cout<<endl;
    }
    return 0;
}