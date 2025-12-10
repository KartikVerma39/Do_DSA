// 33. Search in Rotated Sorted Array


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {4,5,6,7,0,1,2};
    int target = 0;

    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            cout<<mid;
            return 0;
        }
        else if(arr[mid] >= arr[low]){
            if(arr[mid] > target && arr[low] <= target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(arr[mid] < target && arr[high] >= target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }

    cout<<-1;
    return 0;
}