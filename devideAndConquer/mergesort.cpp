#include <iostream>
#include<vector>
using namespace std;

// Function to merge two sorted arrays into a single sorted array
void mergeTwoSortedArrays(int arr[], int size, int start, int mid, int end) {
    int i = 0;
    int j = 0;
    int index = start;

    int brrSize = mid - start + 1;
    int crrSize = end - mid;

    int *brr = new int[brrSize];
    int *crr = new int[crrSize];

    // arr ke values brr and crr me copy karte hai
    while(i < brrSize){
        brr[i++] = arr[index++]; 
    }
    index = mid+1;
    while(j < crrSize){
        crr[j++] = arr[index++];
    }

    index = start;
    i=0,j=0;

    while(i < brrSize && j < crrSize) {
        if(brr[i] < crr[j]){
            arr[index++] = brr[i++];
        }
        else{
            arr[index++] = crr[j++];;
        }
    }
    while(i < brrSize){
        arr[index++] = brr[i++];
    }

    while(j < crrSize){
        arr[index++] = crr[j++];
    }

    delete[] brr;
    delete[] crr;
}


void mergeSort(int arr[], int size, int start, int end) {
    if(start >= end){
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(arr, size, start, mid);

    mergeSort(arr, size, mid+1, end);

    mergeTwoSortedArrays(arr, size, start, mid, end);
}


int main() {
    int arr[] = {40, 20, 30, 10, 50, 5, 88, 12, 65, 99};

    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;

    mergeSort(arr, size, start, end);

    for(int i=0; i< size; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}