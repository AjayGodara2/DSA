#include<bits/stdc++.h>
using namespace std;
//not sorted
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factors are:\n";
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            int temp=n/i;
            cout<<i<<" ";
            if(i!=temp){
                cout<<temp<<" ";
            }
        }
    }
}