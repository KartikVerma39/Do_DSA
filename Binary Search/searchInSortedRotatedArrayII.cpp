// 81. Search in Rotated Sorted Array II



#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {2,5,6,0,0,1,2};
    int target = 3;

    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            cout<<"True";
            return 0;
        }
        if(arr[mid] == arr[low] && arr[mid] == arr[high]){
            low++;
            high--;
            continue;
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

    cout<<"False";
    return 0;
}