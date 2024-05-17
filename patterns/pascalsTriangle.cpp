#include<iostream>
using namespace std;

int main(){
    int n=6;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n-i; ++j){
            cout<<"  ";
        }
        int c=1;
        for(int j=1; j<=i; j++){
            cout<<c<<"   ";
            c = c * (i - j) / j;
        }
        cout<<endl;
    }
}