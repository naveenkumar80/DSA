#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter the number of lines :";
    cin>>n;
    for (i = 0 ; i < n ; i++){
        for(j = 0; j < i; j++){
            cout<<" ";
        }
        for(int k = n - i; k > 0; k--){
            cout<<n - i;
        }
        cout<<endl;
    }
    return 0;
}