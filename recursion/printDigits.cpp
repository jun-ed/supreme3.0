#include<iostream>
using namespace std;

void printDigit(int x){
    if(x == 0) {
        return;
    }
    
    int n = x / 10;

    printDigit(n);
    
    int digit = x % 10;
    cout<< digit << " ";
}

int main(){
    int x = 1241;
    printDigit(x);
    cout<<endl;
}