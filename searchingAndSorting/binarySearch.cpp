#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start=0;
    int end=n-1;
    
    while(start < end){
        int mid = start + (end-start) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4, 7, 12, 31, 69, 80};
    int n = 6;
    int target = 69;
    cout<<"Target element is found at index: "<<binarySearch(arr, n, 99)<<endl;
}