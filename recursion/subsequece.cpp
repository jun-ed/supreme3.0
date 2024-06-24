#include<iostream>
#include<climits>
#include<vector>

using namespace std;

void printSubsequence(string str, string output, int i, vector<string> &subsequences){
    if(str.length() <= i) {
        // cout << output << endl;
        subsequences.push_back(output);
        return;
    }

    printSubsequence(str, output + str[i], i + 1, subsequences);
    printSubsequence(str, output, i + 1, subsequences);
}


int main(){
    string str = "abc";
    string output = "";
    vector<string> subsequences;
    printSubsequence(str, output, 0, subsequences);

    for(auto i : subsequences) {
        cout << i << endl;
    }
}