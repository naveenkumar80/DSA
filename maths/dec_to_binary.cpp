#include<iostream>
using namespace std;

int decTobinary(int num){
    int ans = 0, power = 1 ;

    while(num > 0){
        int rem = num % 2;
        num = num/2;

        ans += rem * power;
        power = power*10;
    }
    return ans;

}

int main()
{
    int decNum = 50;
    int bin = decTobinary(decNum);

    cout<<bin;
    
    return 0;
}