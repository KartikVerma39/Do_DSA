// Count occurrences of a number in a sorted array with duplicates



#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {5,7,7,8,8,10};
    int target = 7;
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int first = -1;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            first = mid;
            high = mid - 1; 
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    low = 0;
    high = n - 1;
    int last = -1;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            last = mid;
            low = mid + 1; 
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    if(first == -1){
        cout<<0<<" ";
        return 0;
    }

    cout<<last - first + 1;
    return 0;

}