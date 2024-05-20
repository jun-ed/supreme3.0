#include<iostream>
#include <climits>
using namespace std;

void diagnolSum(int arr[][4], int n){
    int sum=0;
    for(int i=0; i<n; ++i){
        sum = sum + arr[i][i];
    }
    cout<<"Diagnol Sum of matrix is: "<< sum<<endl;
}


int main(){
    int arr[4][4] = {
                    {10,20,3,40},
                    {50,6,70,80},
                    {11,2,3,4},
                    {5,6,777,8}
                    };

    diagnolSum(arr, 4);
    
}