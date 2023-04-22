#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>&arr, int n ){
    for(int i = 1; i<n; i++){
       for(int j = i; j>0; j--){
           if(arr[j-1] > arr[j]){
               swap(arr[j-1],arr[j]);
           }
       }
    }
}

int main() {
  
    int n = 5;
    vector<int>arr = { 5,4,3,2,1};
    
    InsertionSort(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}
