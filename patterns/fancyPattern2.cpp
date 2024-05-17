#include<iostream>
using namespace std;

int main(){
    int n=4;
    int count=1;
    for(int i=0;i<n;++i){
        for(int j=0;j<2*i+1;++j){
            if(j&1){
                cout<<"*";
            }
            else{
                cout<<count;
                count++;
            }            
        }
        cout<<endl;
    }
    count--;
    int x = count;
    for(int i=0;i<n;++i){
        x = count - n+1;
        for(int j=0;j<2*n-2*i-1;++j){
            if(j&1){
                cout<<"*";
                count--;
            }
            else{
                cout<<x;
                x++;                
            }            
        }
        cout<<endl;
    }
}