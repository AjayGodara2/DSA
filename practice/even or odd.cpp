#include<bits/stdc++.h>
using namespace std;

int main(){
    int no;
    cout << "Enter the number: ";
    cin >> no;
    if(no>0){
        cout<<"Positive\n";
        if(no %2==0){
            cout << "Even";
        }else{
            cout <<"Odd";
        }
    }else if(no<0){
        cout << "Negative";
    }else{
        cout <<"Zero";
    }

}