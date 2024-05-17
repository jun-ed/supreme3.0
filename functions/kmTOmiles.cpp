#include<iostream>
using namespace std;

void kmtomiles(float km){
    cout<< km * 0.621371 <<endl;
}

int main(){
    float km;
    cin>>km;
    kmtomiles(km);
}