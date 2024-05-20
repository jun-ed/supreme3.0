#include<iostream>
using namespace std;

void transpose(int arr[][4], int n){

    for(int i=0; i<n; ++i){
        for(int j=i; j<n; ++j){
            
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void print(int arr[][4], int n){
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[4][4] = {
                    {10,20,3,40},
                    {50,6,70,80},
                    {11,2,3,4},
                    {5,6,777,8}
                    };
    transpose(arr, 4);
    print(arr,4);
}