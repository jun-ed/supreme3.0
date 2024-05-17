#include<iostream>
using namespace std;


void fancy12(int n){
    for(int i=0; i<n; ++i){
        char ch = 'A'-1;
        for(int j=0; j< i+1; ++j){
            ch = ch + 1;
            cout<<ch<<" ";
        }
        for(int j=0; j<i; ++j){
            ch--;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    fancy12(n);
}