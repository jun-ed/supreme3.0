#include<iostream>
#include<algorithm>
using namespace std;

void xorr(int arr[], int n){
    int ans=0;
    for(int i=0; i<n;++i){
        ans = ans ^ arr[i];
    }
    cout<<ans<<endl;
}

void method2(int arr[], int n){
    int i=0,ans=-1;
    while(i < n){
        if(arr[i] == arr[i+1]){
            i=i+2;
        }
        else{
            ans=arr[i];
            break;
        }
    }
    cout<<"method 2 ans: "<<ans<<endl;
}

int main(){
    int arr[] = {1, 5, 3, 1, 4, 5, 3, 4,69};
    int n = 9;
    xorr(arr, n);
    sort(arr, arr+n);

    method2(arr, n);

}