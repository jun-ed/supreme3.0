#include<iostream>
using namespace std;

int main(){
    int n=10;
    
    for(int i=1; i<=n; ++i){
        
        for(int j=1; j<=n; ++j){
            if(i == 1 || i == n){
                cout<<"* ";
            }
            else{
                if(j == 1 || j == n || j == i ){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}