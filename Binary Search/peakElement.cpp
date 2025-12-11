// 162. Find Peak Element


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,2,1,3,5,6,4};
    int n = arr.size();
    if(n == 1){
        cout<<0;
        return 0;
    }
    else if(arr[0] > arr[1]){
        cout<<0;
        return 0;
    }
    else if(arr[n-1] > arr[n-2]){
        cout<<n-1;
        return 0;
    }
    int low = 1;
    int high = n - 2;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
            cout<<mid;
            return 0;
        }
        else if(arr[mid] > arr[mid - 1]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    } 
    cout<<-1;
    return 0;
}