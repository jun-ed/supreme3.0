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

void allPrime(int n){
    for(int i=1; i<=n; i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    allPrime(n);
}