#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,even=0,odd=0;
    cout <<"Enter the number: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even +=i;
        }else{
            odd +=i;
        }
    }

    cout << "sum of even number is "<< even <<"\n";
    cout << "sum of odd number is "<<odd;
}