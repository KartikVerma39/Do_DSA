// Largest subarray with 0 sum


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {15, -2, 2, -8, 1, 7, 10, 23};
    int maxi = 0;
    unordered_map<int,int>mp;
    int sum = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        sum += arr[i];
        if(sum == 0){
            maxi = i + 1;
        }
        else{
            if(mp.find(sum)!=mp.end()){
                maxi = max(maxi , i - mp[sum]);
            }
            else{
                mp[sum] = i;
            }
        }
    }
    cout<<maxi;
}