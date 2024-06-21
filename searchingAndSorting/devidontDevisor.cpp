#include<iostream>
using namespace std;

int getQuotient(int devident, int devisor){
    int start = 0;
    int end = devident;
    int ans = -1;//
    while(start <= end){
        int mid = start + (end - start)/2;
        cout<<"mid->"<<mid<<endl;
        if(mid * devisor == devident){
            return mid;
            cout<<"ans->"<<ans<<endl;
            
        }
        else if(mid * devisor < devident){
            ans = mid;
            start = mid + 1;
            
        }
        else{
            end = mid -1;
        }
    }
    return ans;
}

int main(){
    int devident=-10;
    int devisor=3;

    int quotient = getQuotient(abs(devident), abs(devisor));

    if((devident < 0 && devisor >= 0) || (devident >= 0 && devisor < 0)){
        quotient = 0 - quotient;
    }

    cout<<quotient<<endl;
}