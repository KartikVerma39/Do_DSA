// Second Largest Element in an Array without sorting

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {3,21,23,1,4,2,5,9};
    int large = arr[0];
    int second = INT16_MIN;
    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i] > large){
            second = large;
            large = arr[i];
        }
        if(arr[i] < large && arr[i] > second){
            second = arr[i];
        } 
    }
    cout<<second;
}