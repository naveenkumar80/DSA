#include<iostream>
using namespace std;
int main(){
    int number, i, j;
    char ch;

    cout<<"enter the number of lines you want to print :"<<endl;
    cin>>number;

    for(i=0; i<number ; i++){
        ch = 'A';
        for( j=0 ; j < number; j++){
            cout<<ch;
            ch = ch + 1 ;
        }
        cout<<endl;
    }

    return 0;
}