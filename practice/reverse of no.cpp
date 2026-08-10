#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    int rev = 0;
    while(n>0){
        int temp;
        temp = n%10;
        rev = rev*10 + temp;
        n /= 10;
    }
    cout <<rev;
}