#include<iostream>
#include<climits>

using namespace std;

void maxinArr(int arr[], int start, int size, int &ans){

    if(start >= size)
        return;

    if(arr[start] > ans){
        ans = max(ans, arr[start]);
    }
    maxinArr(arr, start+1, size, ans);
}


int main(){
    int arr[] = {1, 2, 31, 4, 5};
    // print(arr, 0, 5);
    int maxi = INT_MIN;
    maxinArr(arr, 0, 5, found);
    cout<<maxi<<endl;
}