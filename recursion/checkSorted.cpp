#include<iostream>
#include<climits>

using namespace std;

bool checkSorted(int arr[], int size, int i){
    if(i > size-1){
        return true;
    }
    if(arr[i] > arr[i+1]){
        return false;
    }
    return checkSorted(arr, size, i+1);
}

// check sorted for decending order
bool desCheckSorted(int arr[], int size, int i){
    if(i > size-1){
        return true;
    }
    if(arr[i] < arr[i+1]){
        return false;
    }
    return desCheckSorted(arr, size, i+1);
}


int main(){
    // int arr[] = {1, 2, 3, 4, 5, 6};
    int arr[] = {6, 5, 4, 3, 2, 1};
    // print(arr, 0, 5);
    // bool isSorted = checkSorted(arr, 6, 0);
    bool isSorted = desCheckSorted(arr, 6, 0);
    cout << "Is the array sorted? " << (isSorted? "Yes" : "No") << endl;
    return 0;    
}