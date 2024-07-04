#include <cstdio>
#include <iostream>
using namespace std;

int func() {
    static int i = 16;
    return i--;
}

int main(){
    for(func();func(); func()) {
        cout<<func()<<endl;
    }
    cout<<endl;
}