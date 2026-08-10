#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, pod=1;
    cout <<"Enter the number: ";
    cin >> n;

    while(n>0){
        int temp = n%10;
        pod *=temp;
        n /=10;
    }
    cout <<"Product of digits is "<<pod;
}