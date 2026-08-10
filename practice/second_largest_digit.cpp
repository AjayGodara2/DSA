#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,largest=0,largest2=0;
    cout<<"Enter the number: ";
    cin >> n;
    while(n>0){
        int temp = n%10;
        if(temp>largest){
            largest2 = largest;
            largest = temp;
        }
        if(temp<largest && temp>=largest2){
            largest2 = temp;
        }

        n /= 10;
    }
    cout << "Second largest digit is "<<largest2;
}