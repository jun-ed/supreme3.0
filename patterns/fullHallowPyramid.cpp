#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i =0; i<n; ++i){
        for(int j=0; j<n-i; ++j){
            cout << "  ";
        }
        for(int j=0; j <i+1; ++j){
            if(i == 0 || i == n-1 || j == 0 || j == i){
                cout<<"*   ";
            }
            else{
                cout<<"    ";
            }
            
        }
        cout<<endl;
    }
}
