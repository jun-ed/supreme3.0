#include<iostream>
using namespace std;

float areaOfCircle(int r){
    return 3.142 * r*r;
}

int main(){
    int n;
    cin>>n;
    cout<<"Area of circle: "<<areaOfCircle(n)<<endl;
}