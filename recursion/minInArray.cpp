#include<iostream>
#include<climits>

using namespace std;

void mininArr(int arr[], int start, int size, int &ans){

    if(start >= size)
        return;

    if(arr[start] < ans){
        ans = min(ans, arr[start]);
    }
    mininArr(arr, start+1, size, ans);
}


int main(){
    int arr[] = {11, 2, 31, 4, 5};
    // print(arr, 0, 5);
    int mini = INT_MAX;
    mininArr(arr, 0, 5, mini);
    cout<<mini<<endl;
}