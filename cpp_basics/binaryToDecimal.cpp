#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n){
    int decimalNo=0;
    int i=0;
    while(n>0){
        int bit = n % 10;
        decimalNo = bit * pow(2, i++) + decimalNo;
        n = n/10;
    }
    return decimalNo;
}
// using bitwise operator
int bitwiseBinaryToDecimal(int n){
    int decimalNo=0;
    int i=0;
    while(n>0){
        
        int bit = n & 1;
        
        decimalNo = bit * pow(2, i++) + decimalNo;
        cout<<"value of n iside loop before >> op "<<n<<endl;
        n = n / 10;
        cout<<"value of n iside loop after >> op  "<<n<<endl;
    }
    return decimalNo;
}

int main(){
    int n=101;
    cout<< binaryToDecimal(n)<<endl;
}