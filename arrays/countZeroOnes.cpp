#include<iostream>
using namespace std;

void count(int arr[], int n){
    int zero=0,one=0;
    for(int i=0; i<n; ++i){
        if(arr[i] == 0)
            ++zero;
        else
            ++one;
    }
    cout<<"Zeor Count->"<<zero<<"  One Count->"<<one<<endl;
    for(int i=0; i<n; ++i){
        if(zero){
            arr[i] = 0;
            zero--;
        }
        else{
            arr[i] = 1;
            one--;
        }
    }
}


void swapZO(int arr[], int n){
    int low = 0;
    int high = n-1;

    while(low <= high){
        if(arr[low] == 0){
            low++;
        }
        else if(arr[high] == 1){
            high--;
        }
        else{
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    cout<<"swapZO"<<endl;
}


void print(int arr[], int n){
    for(int i=0; i<n; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,0,1,0,0,1,1,1};
    // count(arr, 8);
    swapZO(arr, 8);
    print(arr, 8);
}