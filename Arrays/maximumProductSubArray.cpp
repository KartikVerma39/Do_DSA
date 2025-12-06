// 152. Maximum Product Subarray


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {5,4,-1,2};
    int prefix = 1;
    int suffix = 1;
    int n = arr.size();
    int product = INT16_MIN;
    for(int i = 0 ; i < arr.size() ; i++){
        if(prefix == 0){
            prefix = 1;
        }
        if(suffix == 0){
            suffix = 1;
        }
        prefix *= arr[i];
        suffix *= arr[n-i-1];
        product = max(product , max(suffix , prefix));
    }
    cout<<product;
}