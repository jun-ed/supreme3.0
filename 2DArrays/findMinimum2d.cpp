#include<iostream>
#include <climits>
using namespace std;

void findMin(int arr[][4], int n){
    int min = INT_MAX;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }
    cout<<"Minimum of matrix num is: "<< min<<endl;;
}

void findMax(int arr[][4], int n){
    int max = INT_MIN;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout<<"Maximum num in matrix: "<< max<<endl;;
}

int main(){
    int arr[4][4] = {
                    {10,20,3,40},
                    {50,6,70,80},
                    {11,2,3,4},
                    {5,6,777,8}
                    };

    findMin(arr, 4);
    findMax(arr, 4);
    
}