// Implement Lower Bound


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {2, 3, 7, 10, 11, 11, 25};
    int target = 9;
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = n;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<ans;
}