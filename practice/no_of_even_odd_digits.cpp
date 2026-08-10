#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, even=0, odd=0;
    cout <<"Enter the number: ";
    cin >> n;
    while(n>0){
        int temp = n%10;
        if(temp%2==0){
            even++;
        }else{
            odd++;
        }
        n /= 10;
    }
    cout<<"Number of even digits "<<even<<"\n";
    cout<<"Number of odd digits "<<odd;
}