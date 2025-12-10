// Find Kth Rotation


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {5, 1, 2, 3, 4};
    int k = 0;
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int minElement = INT16_MAX;
    int index = -1;
    
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[low] <= arr[high]){
            if(arr[low] < minElement){
                minElement = arr[low];
                index = low;
            }
            break;
        }
        else if(arr[low] <= arr[mid]){
            if(arr[low] < minElement){
                minElement = arr[low];
                index = low;
            }
            low = mid + 1;
        }
        else{
            if(arr[mid] < minElement){
                minElement = arr[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }
    cout<<index;
}