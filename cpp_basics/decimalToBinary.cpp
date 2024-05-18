#include<iostream>
#include <math.h>
using namespace std;

int decimalToBinaryBitwise(int n){
    int bit = 0, i = 0;
    int ans = 0;
    while(n > 0){
        if(n & 1){
            bit = 1;
        }
        else{
            bit = 0;
        }
        ans = bit * pow(10, i++) + ans;
        n = n >> 1;
    }
    return ans;
}

int decimalToBinary1(int n){
    int bit=0;
    int ans=0;
    int i=0;
    while(n > 0){
        bit = n % 2;
        ans = bit * pow(10, i) + ans;
        i++;
        n = n / 2;
    }
    return ans;
}

int decimalToBinaryRE(int n){

    int ans=0, digit=0;
    if(n == 0){
        return ans;
    }
    digit = n % 2;
    
    ans = decimalToBinaryRE(n/2) * 10 + digit;
    
    return ans;
}

int main(){
    int n = 10;
    // decimalToBinary1(n);
    // cout<<decimalToBinary1(n)<<endl;
    // cout<<decimalToBinaryBitwise(n)<<endl;
    cout<<decimalToBinaryRE(n)<<endl;
    cout<<endl;
}