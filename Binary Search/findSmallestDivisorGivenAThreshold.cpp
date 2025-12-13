// 1283. Find the Smallest Divisor Given a Threshold


#include<iostream> 
#include<vector>
#include<cmath>
using namespace std;
int maxEle(vector<int>&arr){
    int maximum = arr[0];
    for(int i = 1 ; i < arr.size() ; i++){
        maximum = max(maximum , arr[i]);
    }
    return maximum;
}

int check(vector<int>&arr , int mid){
    int sum = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        sum += ceil((double)arr[i]/mid);
    }
    return sum;
}

int main(){
    vector<int>arr = {1,2,5,9};
    int threshold = 6;
    int low = 1;
    int high = maxEle(arr);
    if(arr.size() > threshold){
        cout<<-1;
        return 0;
    }
    
    while(low<=high){
        int mid = low + (high - low)/2;
        if(check(arr , mid) <= threshold){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<low;
    return 0;
}