#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"Enter 1st number: ";
    cin >> n1;
    cout<<"Enter 2nd number: ";
    cin >> n2;
    cout<<"Enter 3rd number: ";
    cin >> n3; 
    int largest,smallest;
    if(n1>=n2 &&n1>=n3){
        largest=n1;
        if(n2>=n3){
            smallest = n3;
        }else{
            smallest=n2;
        }
    }else if(n2>=n1&&n2>=n3){
        largest=n2;
        if(n1>=n3){
            smallest=n3;
        }else{
            smallest=n1;
        }
    }else{
        largest=n3;
        if(n1>=n2){
            smallest=n2;
        }else{
            smallest=n1;
        }
    }
    cout << "Largest number is "<<largest;
    cout << "\nSmallest number is "<<smallest;

}