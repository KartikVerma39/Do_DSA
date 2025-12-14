// Two Sum

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {2,7,11,15};
    int target = 9;
    unordered_map<int,int>mp;
    for(int i = 0 ; i < arr.size() ; i++){
        int current = arr[i];
        int needed = target - current;

        if(mp.find(needed) != mp.end()){
            cout<<mp[needed]<<" "<<i;
        }
        mp[current] = i;
    }
} 