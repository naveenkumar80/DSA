#include<iostream>
using namespace std;

int main()
{
    int i , n , j ;
    n = 6;
    char alpha = 'A';
    for (i = 0; i < n ; i++){
        for(j=0; j < i + 1 ; j++){
            cout<<alpha;
            
        }
        alpha ++;
        cout<<endl;
    }

    return 0;
}