// 704. Binary Search


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,4,5,8,9,10};
    int n = arr.size();
    int low = 0; 
    int high = n - 1;
    int target = 5;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            cout<<mid;
            return 0;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<-1;
    return 0;
}