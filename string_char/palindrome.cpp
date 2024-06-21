#include<iostream>
#include<algorithm>
using namespace std;

int length(char crr[]){
    int i=0;
    while(crr[i] != '\0'){
        i++;
    }
    return i;
}

bool palindrome(char crr[], int n){
    int s=0,e=n-1;
    while(s<=e){
        if(crr[s] != crr[e]){
            return false;
        }
        s++,e--;
    }
    return true;
}

int main(){
    char crr[] = "babiab";
    int len = length(crr);
    cout<<crr<<endl;
    cout<<palindrome(crr,len)<<endl;
    
}