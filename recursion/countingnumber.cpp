#include<iostream>
using namespace std;

void count(int n){
    if(n == 0){
        return;
    }
    // head recursion
    count(n-1);
    cout<<n<<" ";
    // tail recursion
    // count(n-1);
    
}

int main(){
    int n=10;
    count(n);
    cout<<endl;
}