#include<iostream>
using namespace std;


void fancy12(int n){
    for(int i=0; i<n; ++i){
        for(int j=0; j< i*2+1; ++j){
            if(j&1){
                cout<<"* ";
            }
            else{
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    fancy12(n);
}