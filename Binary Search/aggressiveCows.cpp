// Aggressive Cows


#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool possible(vector<int>arr , int distance , int k){
    int last = arr[0];
    int cowCount = 1;
    for(int i = 1 ; i < arr.size() ; i++){
        if(arr[i] - last >= distance){
            cowCount++;
            last = arr[i];
        }
        if(cowCount == k){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int>arr = {1, 2, 4, 8, 9};
    sort(arr.begin() , arr.end());
    int n = arr.size();
    int k = 3;
    int low = 0;
    int high = arr[n-1] - arr[0];
    while(low<=high){
        int mid = low + (high - low)/2;
        if(possible(arr , mid , k) == true){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<high;
    return 0;
}