#include<iostream>
using namespace std;

int main(){
    int c=100;
    int arr[4] = {1,2,3,4};
    for(int i=0; i<4;++i){
        for(int j=i; j<4;++j){
            for(int k=i; k<=i;++k){
                // cout<<arr[k]<<" ";
            }
            // cout<<endl;
        }
    }
    // cout<<arr <<" "<<&arr<<" "<<&arr[0]<<endl;

    for(int i=0; i<10;++i){
        for(;i<10;++i){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}