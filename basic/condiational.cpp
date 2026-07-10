#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout << "Enter you age: ";
    cin >> age;
    if (age > 0 && age < 102){
        if(age>=18){
            cout << "Adult";
        }else{
            cout << "Minor";
        }
    }else{
        cout << "Invalid value";
    }
}