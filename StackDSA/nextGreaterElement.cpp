// Next Greater Element


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {1, 3, 2, 4};
    int n = arr.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i = n-1 ; i>=0 ; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }


    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" "; 
    }
} 