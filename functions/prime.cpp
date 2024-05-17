#include<iostream>
using namespace std;

bool checkPrime(int n){
    if(n ==0 || n == 1){
        return false;
    }
    if(n == 2){
        return true;
    }
    for(int i=2; i<n; ++i){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if(checkPrime(n))
        cout<<"Given number is PRIME"<<endl;
    else
        cout<<"Given number is NOT PRIME"<<endl;
}