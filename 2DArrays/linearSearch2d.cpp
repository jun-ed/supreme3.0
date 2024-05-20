#include<iostream>
using namespace std;

void linearSearch(int arr[][4], int target){
    int n=4;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j] == target){
                cout<<"Found Target at "<<i <<" "<<j<<" indexes"<<endl;
                return;
            }
        }
    }
    cout<<"Target not present in Matrix"<<endl;
}

int main(){
    int arr[4][4] = {
                    {10,20,3,40},
                    {50,6,70,80},
                    {1,2,3,4},
                    {5,6,7,8}
                    };

    linearSearch(arr, 18);
    
}