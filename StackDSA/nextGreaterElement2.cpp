// 503. Next Greater Element II


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {1,2,1};
    stack<int>st;
    int n = arr.size();
    vector<int>ans(n);
    for(int i = 2*n-1 ; i>=0 ; i--){
        while(!st.empty() && st.top() <= arr[i%n]){
            st.pop();
        }
        if(i<n){
            if(st.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = st.top();
            }
        }
        st.push(arr[i%n]);
    }


    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}