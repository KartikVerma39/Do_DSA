// Union of two sorted arrays


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4,5};
    vector<int>arr2 = {1,2,7};
    int i = 0;
    int j = 0;
    vector<int>uni;
    while(i < arr.size() && j<arr2.size()){
        if(arr[i] < arr2[j]){
            if(uni.size() == 0 || uni.back() != arr[i]){
                uni.push_back(arr[i]);
            }
            i++;
        }
        else{
            if(uni.size() == 0 || uni.back() != arr2[j]){
                uni.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<arr.size()){
        if(uni.size() == 0 || uni.back() != arr[i]){
                uni.push_back(arr[i]);
            }
        i++;
    }

    while(j<arr2.size()){
        if(uni.size() == 0 || uni.back() != arr2[j]){
                uni.push_back(arr2[j]);
            }
        j++;
    }

    for(int i = 0 ; i<uni.size() ; i++){
        cout<<uni[i]<<" ";
    }
}