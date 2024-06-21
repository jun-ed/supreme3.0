#include<iostream>
#include<climits>

using namespace std;

void printEven(int arr[], int start, int size){

    if(start >= size)
        return;

    if(!(arr[start]&1)){
        cout<<arr[start]<<" ";
    }
    printEven(arr, start+1, size);
}


int main(){
    int arr[] = {20, 21, 30, 31, 50, 51};
   
    printEven(arr, 0, 6);
    
}