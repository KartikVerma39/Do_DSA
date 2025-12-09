// Ceil in a Sorted Array


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1, 2, 8, 10, 11, 12, 19};
    int n = arr.size();
    int x = 5;
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<ans;
}