#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,largest=0;
    cout<<"Enter the number: ";
    cin >> n;
    while(n>0){
        int temp = n%10;
        if(temp>largest){
            largest = temp;
        }
        n /= 10;
    }
    cout << "largest digit is "<<largest;
}