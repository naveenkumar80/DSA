#include<iostream>
using namespace std;
int main (){

    int  n,i,j;
    char alpha = 'A';

    n=4;

    for(i=0;i<n;i++){
        for(j=0 ; j<n; j++){
            cout<< alpha;
            alpha ++;
        }
        cout<<endl;
    }

    return 0 ;

}