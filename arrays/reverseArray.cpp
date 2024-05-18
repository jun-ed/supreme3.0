#include<iostream>
using namespace std;

void swapXOR(int& a, int& b){
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
}

void swapArray(int arr[], int size){
    int i=0, j = size-1;
    while(i < j){
        swapXOR(arr[i++], arr[j--]);
    }
}

void print(int arr[], int size){
    for(int i=0; i<size; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10;

    swapArray(arr, size);

    print(arr, size);

}