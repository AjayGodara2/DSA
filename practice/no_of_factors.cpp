#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count =0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            int temp = n/i;
            count++;
            if(i!=temp){
                count ++;
            }
        }
    }
    cout<<"Number of factors are: "<<count;
}