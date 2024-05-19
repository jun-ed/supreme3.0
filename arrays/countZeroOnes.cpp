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

void print(int arr[], int n){
    for(int i=0; i<n; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,0,1,0,0,1,1,1};
    count(arr, 8);
    print(arr, 8);
}