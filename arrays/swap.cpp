#include<iostream>
using namespace std;

void swapArithmatic(int& a, int& b){
    a = a + b; //5+6=11
    b = a - b; //11-6=5
    a = a - b; //11-5=6
}

void swapBitwise(int& a, int& b){
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
}

int main(){
    // Arithmatic method
    int a=10, b=11;
    swapBitwise(a, b);
    cout<<"A->"<<a<<"   B->"<<b<<endl;

    // XOR method
    // 10, 11
    // 3, 17
    // 


}