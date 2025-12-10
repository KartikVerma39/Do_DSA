// 153. Find Minimum in Rotated Sorted Array


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {3,4,5,1,2};
    int n = arr.size();
    int minElement = INT_FAST8_MAX;
    int low = 0;
    int high = n - 1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[low] <= arr[high]){
            minElement = min(minElement , arr[low]);
            break;
        }
        else if(arr[low] <= arr[mid]){
            minElement = min(minElement , arr[low]);
            low = mid + 1;
        }
        else{
            minElement = min(minElement , arr[mid]);
            high = mid - 1;
        }
    }
    cout<<minElement;
}