#include<iostream>
using namespace std;

void fun(int brr[], int size){
    for(int i=0; i<size; ++i){
        brr[i] = brr[i] + 100;  
    }
}

int main(){
    int aee[5];
    fill(aee, aee+5, 0);
    fun(aee,5);
    for(int i=0; i<5; ++i){
        cout<<i[aee]<<endl;
    }
}