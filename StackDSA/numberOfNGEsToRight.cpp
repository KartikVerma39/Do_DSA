// Number of greater elements to the right


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countGreat(vector<int>arr , int index){
    int count = 0;
    for(int i = index ; i<arr.size() ; i++){
        if(arr[index] < arr[i]){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int>arr = {3, 4, 2, 7, 5, 8, 10, 6};
    vector<int>indices = {0,5};
    vector<int>ans;
    for(int i = 0 ; i<indices.size() ; i++){
        ans.push_back(countGreat(arr , indices[i]));
    }

    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";  
    }
}