// 1482. Minimum Number of Days to Make m Bouquets


#include<iostream>
#include<vector>
using namespace std;
int minEle(vector<int>arr){
    int minimum = arr[0];
    for(int i = 1 ; i < arr.size() ; i++){
        minimum = min(arr[i] , minimum); 
    }
    return minimum;
}

int maxEle(vector<int>arr){
    int maximum = arr[0];
    for(int i = 1 ; i < arr.size() ; i++){
        maximum = max(arr[i] , maximum);
    }
    return maximum;
}

bool possible(vector<int>arr , int mid , int m , int k){
    int count = 0;
    int final = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] <= mid){
            count++;
        }
        else{
            final += count/k;
            count = 0;
        }
    }
    final += count/k;
    if(final >= m){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    vector<int>arr = {1,10,3,10,2};
    int m = 3;
    int k = 1;
    int totalFlowers = 1LL * m * 1LL * k;
    if(totalFlowers > arr.size()){
        cout<<-1;
        return 0;
    }
    int low = minEle(arr);
    int high = maxEle(arr);
    while(low<=high){
        int mid = low + (high - low)/2;
        if(possible(arr , mid , m , k)){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<low;
    return 0;
}