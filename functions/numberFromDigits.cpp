#include<iostream>
using namespace std;

void createNum(int n){
    int ans;
    for(int i=0; i<n; ++i){
        int x;
        cout<<"Enter the digits: ";
        cin>>x;
        cout<<endl;
        ans = ans * 10 + x;
    }
    cout<<"The created number by digits is: "<<ans<<endl;
}

int main(){
    int n;
    cout<<"Enter the Numbaer of digits you want: "<<endl;
    cin>>n;
    createNum(n);
}