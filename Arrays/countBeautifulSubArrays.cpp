// 2588. Count the Number of Beautiful Subarrays
// -----------------  OR  ------------------------
// Count Subarrays with given XOR


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {4, 2, 2, 6, 4};
    unordered_map<int,int>mpp;
    mpp[0] = 1;
    int xr = 0;
    int count = 0;
    int target = 6;
    for(int i = 0 ; i < arr.size() ; i++){
        xr = xr ^ arr[i];
        int x = xr ^ target;
        count += mpp[x];
        mpp[xr]++;
    }
    cout<<count;
}