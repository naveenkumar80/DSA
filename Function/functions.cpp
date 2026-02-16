#include<iostream>
using namespace std;

void prime(){
    int num;
    cout<<"enter the number :";
    cin>>num;
    if (num <= 1) {
        cout << "Not prime";
        return;
    }
    for(int i = 2; i * i <= num; i++){
        if (num % i == 0){
            cout<<"Not prime";
        }
        else{
            cout<<"prime";
        }
    }
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}


void Nprime(){
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 2; i <= N; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
}

void fibonacci(){
    int a = 0,b = 1 , c, num;
    cout<<"enter the nth number : ";
    cin>>num;
    
    for (int i = 0; i < num; i ++){
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int option;

    cout<<" 1. Check if a number is prime or not \n 2. Print all the prime no to N \n 3. print Nth fibonacci \n";
    cout<<"enter the option ";
    cin>>option;

    if (option == 1){
        prime();
    }
    else if (option == 2)
    {
        Nprime();
    }
    else{
        fibonacci();
    }

    return 0;
}
