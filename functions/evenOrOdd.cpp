#include<iostream>
using namespace std;

void evenOrOdd(int n){
    if(n&1){
        cout<< "Given number is Odd"<<endl;
    }
    else 
        cout<< "Given number is Even"<<endl;
}

int main(){
    float n;
    cin>>n;
    evenOrOdd(n);
}