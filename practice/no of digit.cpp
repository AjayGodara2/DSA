#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cout << "Enter the number: ";
    cin >> n;
    if(n==0){
        cout <<"Number of digits is 1";
        return 0;
    }else if(n<0){
        n = -n;
    }

    while(n>0){
        n /= 10;
        count++;
    }
    cout <<"Number of digits are "<<count;
}