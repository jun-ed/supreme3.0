#include<iostream>
using namespace std;

void diagnolPrint1(int arr[][4]){
    for(int i=0;i<4;++i){
        cout<<arr[i][i]<<" ";
    }
    cout<<endl;
}

void diagnolPrint2(int arr[][4]){
    int n=4;
    for(int i=0;i<n;++i){
        cout<<arr[i][n-1-i]<<" ";
    }
    cout<<endl;
}


void print(int arr[][4]){
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[4][4] = {
                    {10,20,3,40},
                    {50,6,70,80},
                    {1,2,3,4},
                    {5,6,7,8}
                    };

    diagnolPrint1(arr);
    
}