// 18. 4Sum


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    vector<int>arr = {1,0,-1,0,-2,2};
    sort(arr.begin() , arr.end());
    int target = 0;
    vector<vector<int>>ans; 

    for(int i = 0 ; i < arr.size() ; i++){
        if(i>0 && arr[i] == arr[i-1]){
            continue;
        } 
        for(int j = i+1 ; j < arr.size() ; j++){
            if(j!=i+1 && arr[j] == arr[j-1]){
                continue;
            }
            int k = j+1;
            int l = arr.size()-1;
            while(k<l){
                long long sum = (long long)arr[i] + arr[j] + arr[k] + arr[l];
                if(sum == target){
                    vector<int>four = {arr[i] , arr[j] , arr[k] , arr[l]};
                    ans.push_back(four);
                    k++;
                    l--;
                    while(k<l && arr[k] == arr[k-1]){
                        k++;
                    }
                    while(k<l && arr[l] == arr[l+1]){
                        l--;
                    }
                }
                else if(sum < target){
                    k++;
                }
                else{
                    l--;
                }
            }
        }
    }   


    for(int i = 0 ; i < ans.size() ; i++){
        for(int j = 0 ;  j < ans[i].size() ; j++){
            cout<<ans[i][j]<<" "; 
        }
        cout<<endl;
    }
}