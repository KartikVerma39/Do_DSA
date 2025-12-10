// 540. Single Element in a Sorted Array


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,1,2,3,3,4,4,8,8};
    int n = arr.size();
    if(n == 1){
        cout<<arr[0];
        return 0;
    }
    else if(arr[n-1] != arr[n-1]){
        cout<<arr[n-1];
        return 0;
    }
    else if(arr[0] != arr[1]){
        cout<<arr[0];
        return 0;
    }

    int low = 1;
    int high = n - 2; 
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]){
            cout<<arr[mid];
            return 0;
        } 
        else if((mid%2 == 0 && arr[mid] == arr[mid+1]) || (mid%2 == 1 && arr[mid] == arr[mid-1])){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<-1;
    return 0;
}