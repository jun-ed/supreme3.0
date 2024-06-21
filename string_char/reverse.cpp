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

void reverse(char crr[], int n){
    int s=0,e=n-1;
    while(s<=e){
        swap(crr[s++], crr[e--]);
    }
}

int main(){
    char crr[] = "babbar";
    int len = length(crr);
    cout<<crr<<endl;
    reverse(crr,len);
    cout<<crr<<endl;
}