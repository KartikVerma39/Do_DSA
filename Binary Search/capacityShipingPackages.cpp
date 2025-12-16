// 1011. Capacity To Ship Packages Within D Days


#include<iostream>
#include<vector>
using namespace std;
int maxi(vector<int>arr){
    int maxElement = arr[0];
    for(int i = 1 ; i < arr.size() ; i++){
        maxElement = max(maxElement , arr[i]);
    }
    return maxElement;
}

int sumission(vector<int>arr){
    int sum = arr[0];
    for(int i = 1 ; i < arr.size() ; i++){
        sum += arr[i];
    }
    return sum;
}

int minWeight(vector<int>arr , int mid){
    int load = 0;
    int days = 1;

    for(int i = 0 ; i < arr.size() ; i++){
        if(load + arr[i] > mid){
            days++;
            load = arr[i];
        }
        else{
            load += arr[i];
        }
    }
    return days;
}
int main(){
    vector<int>arr =  {3,2,2,4,1,4};
    int days = 3;
    int low = maxi(arr);
    int high = sumission(arr);
    while(low <= high){
        int mid = low + (high - low)/2;
        int possible = minWeight(arr , mid);
        if(possible <= days){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<low;
    return 0;
}