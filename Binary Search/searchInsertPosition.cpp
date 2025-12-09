// 35. Search Insert Position


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,3,5,6};
    int target = 2;
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            cout<<mid;
            return 0;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<low;
    return 0;
}