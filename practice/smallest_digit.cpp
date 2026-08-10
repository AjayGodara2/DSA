#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,smallest=9;
    cout<<"Enter the number: ";
    cin >> n;
    while(n>0){
        int temp = n%10;
        if(temp<smallest){
            smallest = temp;
        }
        n /= 10;
    }
    cout << "smallest digit is "<<smallest;
}