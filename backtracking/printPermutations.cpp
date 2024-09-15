#include<iostream>
#include<string>
using namespace std;

int count = 0;

void printPermutation(string &s, int i){
    if(i >= s.length()) {
        cout << ++count << ")  " << s << endl;
        return;
    }

    for(int j = i; j < s.length(); ++j) {
        swap(s[i], s[j]);
        printPermutation(s, i + 1);

        // backtracking
        swap(s[i], s[j]);
    }
}

int main(){
    string s = "xyz";
    int i = 0;
    printPermutation(s, i);
}