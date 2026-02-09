#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the no. of lines : ";
    cin>>n;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - i; j++){
            cout<<" ";            
        }
        for(j = 0 ; j < i+1 ; j ++){
            cout<< j + 1;
        } 
        for (j = 0; j < i ; j++){
            cout<< i -j;
            
        }    
        cout<<endl;
    }
    return 0;
}