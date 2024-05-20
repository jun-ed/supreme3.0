#include<iostream>
using namespace std;

// Debug the code. Linear Search.
void linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            cout<<i<<endl;
            return;
        }
    }
    return;
}
int main(){
    int arr[5] = {10,20,30,40,50};
    linearSearch(arr,5,50);
}


// // sum of two arrays
// #include<iostream>
// using namespace std;

// int main(){
//     int n, sum=0;
//     cin >> n;
//     int input[n];
//     for(int i=0;i<n;i++){
//         cin >> input[i];
//     }
//      for(int i=0; i<n; i++){
//          sum = sum + input[i];
//      }
//     cout << sum << endl;
//     return 0;
// }