#include<iostream>
using namespace std;

int searchBS(int arr[], int n, int target){
    int start = 0;
    int end=n-1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid+1] == target){
            return mid+1;
        }
        else if(arr[mid-1] == target){
            return mid -1;
        }
        else if(arr[mid] > target){
            end = mid - 2;
        }
        else{
            start = mid + 2;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,3,40,20,50,80,70};
    int size=7;
    int target=50;

    cout<<"Found target at index:->"<<searchBS(arr,size,target)<<endl;
}