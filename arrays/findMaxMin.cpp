#include<iostream>
#include <climits>
using namespace std;

int findMax(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; ++i){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; ++i){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[] = {88, 69, 5, 420, 780, 55, 22};
    cout<<"Minimum element is : "<<findMin(arr, 7)<<endl;
    cout<<"Maximum element is : "<<findMax(arr, 7)<<endl;
}