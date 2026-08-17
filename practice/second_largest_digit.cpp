#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;

    int largest = n%10;
    int largest2=0;
    n/=10;
    bool found = false;
    
    while(n>0){
        int temp = n%10;
        if(temp>largest){
            largest2 = largest;
            largest = temp;
            found = true;
        }else if(temp<largest && temp>largest2){
            largest2 = temp;
            found = true;
        }

        n /= 10;
    }
    if(found){
        cout << "Second largest digit is "<<largest2;
    }else{
        cout << "Second largest digit dont exist ";
    }
    
}