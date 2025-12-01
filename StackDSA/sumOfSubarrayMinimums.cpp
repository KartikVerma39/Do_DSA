// 907. Sum of Subarray Minimums


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>leftMinimum(vector<int>arr){
    int n = arr.size();
    vector<int>l(n);
    stack<int>st;
    for(int i = 0 ; i<arr.size() ; i++){
        while(!st.empty() && arr[st.top()] >= arr[i]){
            st.pop();
        }
        if(st.empty()){
            l[i] = -1;
        }
        else{
            l[i] = st.top();
        }
        st.push(i);
    }
    return l;
}

vector<int>rightMinimum(vector<int>arr){
    int n = arr.size();
    vector<int>r(n);
    stack<int>st;
    for(int i = n-1 ; i >= 0 ; i--){
        while(!st.empty() && arr[st.top()] > arr[i]){
            st.pop();
        }
        if(st.empty()){
            r[i] = n;
        }
        else{
            r[i] = st.top();
        }
        st.push(i);
    }
    return r;
}
int main(){
    vector<int>arr = {3,1,2,4};
    vector<int>l = leftMinimum(arr);
    vector<int>r = rightMinimum(arr);
    int M = 1e9+7;

    int total = 0;

    for(int i = 0 ;  i < arr.size() ; i++){
        int left = i-l[i];
        int right = r[i]-i;
        int totalSub = left*right;
        int totalSum = arr[i]*totalSub;

        total = (total+totalSum)%M;
    }

    cout<<total;
    
}