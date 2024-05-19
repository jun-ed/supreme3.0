#include<iostream>
using namespace std;

pair<int, int> twoSum(int arr[], int n, int target){
    pair<int, int> ans = make_pair(-1, -1);
    for(int i=0; i<n; ++i){
        for(int j=i; j<n; ++j){
            if(arr[i]+arr[j] == target){
                ans.first = arr[i];
                ans.second = arr[j];
            }
        }
    }
    return ans;
}

int main(){
    pair<int, int> ans;
    int arr[] = {20, 30, 40, 50, 60, 70};
    int n=6;
    int target= 100;
    ans = twoSum(arr, n, target);
    cout<<ans.first<<", "<<ans.second<<endl;
}