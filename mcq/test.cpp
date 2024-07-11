#include<iostream>
using namespace std;

int main(){
    int a = 0, x;
    x = ++a * --a;

    cout<<++a<<" "<<a++<<" "<<x<<endl;
}