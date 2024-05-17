#include<iostream>
using namespace std;

void fancy(int n){
    for(int i=0; i<n; ++i){
        for(int j=0; j<n*2-i-2; ++j){
            cout<<"*";
        }
        for(int j=0; j<2*i+1; ++j){
            if(j&1){
                cout<<"*";
            }
            else{
                cout<<i+1;
            }
        }
        for(int j=0; j<n*2-i-2; ++j){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    fancy(n);
}