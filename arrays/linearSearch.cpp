#include<iostream>
using namespace std;

void print(int arr[], int size){
    for(int i=0; i<size; ++i){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

bool linearSearch(int arr[], int size, int element){
    for(int i=0; i<size; ++i){
        if(arr[i] == element){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[] = {12, 8, 4, 69, 420, 88};
    bool ans = linearSearch(arr, 6, 9);
    cout<<ans<<endl;
}