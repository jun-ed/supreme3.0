#include<iostream>
using namespace std;

void extreamPrinting(int arr[], int size){
    int start=0;
    int end = size-1;
    while(start <= end){
        cout<<arr[start]<<" ";
        start++;
        if(start < end)
            cout<<arr[end--]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    extreamPrinting(arr, 7);
}