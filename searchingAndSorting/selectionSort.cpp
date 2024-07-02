#include<iostream>
using namespace std;


void selectionSort(int arr[], int n){

    for(int i=0; i<n-1; ++i) {
        int minIndex = i;
        for(int j=i; j<n; ++j) {
            if(arr[i] > arr[j]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[] = {44, 33, 55, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);

    for(int i=0; i<n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}