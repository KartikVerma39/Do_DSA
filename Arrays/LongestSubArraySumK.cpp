// Longest subarray with given sum K


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int left = 0;
    int right = 0;
    long long sum = arr[0];
    int maxLen = 0;
    while(right < arr.size()){
        while(left <= right && sum > k){
            sum = sum - arr[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen , right - left + 1);
        }
        right++;
        if(right<arr.size()){
            sum += arr[right];
        }
    }
    cout<<maxLen;
}