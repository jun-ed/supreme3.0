#include<iostream>
#include<limits.h>
using namespace std;

int kadanesAlgo(int arr[], int n) {
     int ans = INT_MIN;
     int sum = 0;
     for(int i=0; i<n; ++i) {
        sum = sum + arr[i];
        ans = max(ans,sum);
        if(sum < 0) {
            sum = 0;
        }
     }
     return ans;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<< "Kaddens Algorithm ans-> "<<kadanesAlgo(arr, n)<<endl;
}