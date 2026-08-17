#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    bool isprime = true;

    if(n<2){
        cout<<"Number is not prime";
        return 0;
    }

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime = false;
            break;
        }
    }
    if(isprime){
        cout<<"Number is prime";
    }else{
        cout<<"Number is not a prime";
    }
}