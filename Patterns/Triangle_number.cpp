#include<iostream>
using namespace std;

int main()
{
    int n , i ,j ;
    n = 5;
    for(i = 0 ; i<n ; i++){
        for(j = 0 ; j<(i+1); j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}