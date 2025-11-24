// 31. Next Permutation


#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {1,2,3};
    int n = arr.size();
    
    int index = -1;

    for(int i = n-2 ; i >= 0 ; i--){
        if(arr[i] < arr[i+1]){
            index = i;
            break;
        }
    }

    if(index == -1){
        reverse(arr.begin() , arr.end());
    }

    for(int i = n-1 ; i >= 0 ; i--){
        if(arr[index] < arr[i]){
            swap(arr[index] , arr[i]);
            break;
        }
    }

    reverse(arr.begin() + 1 + index , arr.end());

    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}
