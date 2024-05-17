#include<iostream>
using namespace std;

void allDigits(int n){
    if(n <= 0){
        return;
    }
    allDigits(n/10);
    cout<<n%10<<endl;
}

int main(){
    int n;
    cin>>n;
    allDigits(n);
}