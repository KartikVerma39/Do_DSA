// Array Leaders



#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {16,17,4,3,5,2};
    vector<int>ans;
    int largest = INT_FAST8_MIN;
    for(int i = arr.size() - 1 ; i>=0 ; i--){
        if(arr[i] > largest){
            ans.push_back(arr[i]);
            largest = arr[i];
        }
    }

    reverse(ans.begin(),ans.end());

    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}