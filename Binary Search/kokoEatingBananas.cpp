// 875. Koko Eating Bananas



#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int maxEle(vector<int>arr){
    int ele = arr[0];
    for(int i = 1 ; i < arr.size() ; i++){
        ele = max(ele , arr[i]);
    }
    return ele;
}

long long totalBananas(vector<int>arr , int mid){
    long long hours = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        hours += ceil(double(arr[i])/double(mid));
    }    
    return hours;
}

int main(){
    vector<int>arr = {3,6,7,11};
    int h = 8;
    int low = 1;
    int high = maxEle(arr);
    while(low <= high){
        int mid = low + (high - low)/2;
        long long totalH = totalBananas(arr , mid);
        if(totalH <= h){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<low;
    return 0;
}