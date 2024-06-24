#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;
    int (*p)[5] = &arr;
   
    cout<<(p[1])<<endl;
    cout<<&arr[1]<<endl;
}