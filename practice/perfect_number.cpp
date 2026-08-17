#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout <<"Enter a number: ";
    cin>>n;
    int sum = 0;
    if(n <= 1){
    cout << "Not a Perfect number";
    return 0;
    }
    for(int i = 1; i*i<=n;i++){
        if(n%i==0){
            int temp = n/i;
                sum += i;
                if(temp != n){
                    sum += temp;
                }
        }
    }
    if(sum == n){
        cout<<"Perfect number";
    }else{
        cout<<"Not a Perfect number";
    }
}