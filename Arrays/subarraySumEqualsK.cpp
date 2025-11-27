// 560. Subarray Sum Equals K


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {1,1,1};
    int k = 2;

    unordered_map<int,int>mp;

    int prefixSum = 0;
    int count = 0;
    mp[0] = 1;
    for(int i = 0 ; i < arr.size() ; i++){
        prefixSum += arr[i];
        int need = prefixSum - k;
        count+=mp[need];
        mp[prefixSum] += 1;
    }

    cout<<count;
}