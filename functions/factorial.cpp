#include<iostream>
using namespace std;

long long int factorial(int n){
    long long int ans = 1;
    for(int i=1; i<=n; ++i){
        ans *= i;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    if(n > 12){
        cout<<"Enter value less than 12 "<<endl;
        return 0;
    }
    cout<<factorial(n)<<endl;
}