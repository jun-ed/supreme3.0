#include<iostream>
#include <climits>
using namespace std;

void rowSum(int arr[][4], int n){
    for(int i=0;i<n;++i){
        int sum = 0;
        for(int j=0;j<n;++j){
            sum = sum + arr[i][j];
        }
        cout<<"RowSum of row no: "<<i<<" is: "<<sum<<endl;
    }
}

void colSum(int arr[][4], int n){
    for(int i=0;i<n;++i){
        int sum = 0;
        int j;
        for(j=0;j<n;++j){
            sum = sum + arr[j][i];
        }
        cout<<"ColSum of col no: "<<i<<" is: "<<sum<<endl;
    }
}

int main(){
    int arr[4][4] = {
                    {10,20,3,40},
                    {50,6,70,80},
                    {11,2,3,4},
                    {5,6,777,8}
                    };

    rowSum(arr, 4);
    cout<<endl<<endl;
    colSum(arr, 4);
    
}