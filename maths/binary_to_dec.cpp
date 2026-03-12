#include<iostream>
using namespace std;

int binaryTodec(int num){
    int ans = 0 , pow = 1;
    while(num > 0){
        int lastnum = num % 10;
        ans += lastnum * pow;
        num = num/10;
        pow = pow*2;
    }
    cout<<ans;
    return 0;   
}

int main()
{
    int num = 101011;

    binaryTodec(num);

    return 0;
}