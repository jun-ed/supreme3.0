#include<iostream>
using namespace std;

void search(int arr[], int start, int size, int target, int &found){
    if(start >= size) return;
    if(arr[start] == target) 
    {   
        found = start;
        return;
    }
    search(arr, start+1, size, target, found);
}

void print(int arr[], int start, int size){
    if(start >= size) return;
    cout<< arr[start] << " ";
    print(arr, start+1, size);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    // print(arr, 0, 5);
    int found = -1;
    search(arr, 0, 5, 3,found);
    cout<<found<<endl;
}