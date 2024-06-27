#include <iostream>
#include<vector>
using namespace std;

// Function to merge two sorted arrays into a single sorted array
void mergeTwoSortedArrays(int arr[], int arrSize, int brr[], int brrSize, vector<int>& mergedArray) {
    int i = 0;
    int j = 0;
    int index = 0;
    while(i < arrSize && j < brrSize) {
        if(arr[i] < brr[j]){
            mergedArray[index] = arr[i];
            ++i;
            ++index;
        }
        else{
            mergedArray[index] = brr[j];
            ++j;
            ++index;
        }
    }
    while(i < arrSize){
        mergedArray[index] = arr[i];
        ++i;
        ++index;
    }

    while(j < brrSize){
        mergedArray[index] = brr[j];
        ++j;
        ++index;
    }
}


int main() {
    // int arr[] = {40, 20, 30, 10, 50, 5, 88, 12, 65, 99};
    int arr[] = {10, 30, 50, 70, 90};
    int brr[] = {20, 40, 60, 80, 100}; 
    int arrSize = 5; //sizeof(arr) / sizeof(arr[0]);
    int brrSize = 5; //sizeof(brr) / sizeof(brr[0]);
    vector<int> mergedArray(arrSize + brrSize, 0);

    mergeTwoSortedArrays(arr, arrSize, brr, brrSize, mergedArray);

    for(int i=0; i< mergedArray.size(); ++i){
        cout << mergedArray[i] << " ";
    }
    cout << endl;
    return 0;
}