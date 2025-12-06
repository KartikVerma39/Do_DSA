// 493. Reverse Pairs


#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr , int start , int mid , int end){
    int left = start;
    int right = mid+1;
    vector<int>temp;
    while(left<=mid && right<=end){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left++]);
        } 
        else{
            temp.push_back(arr[right++]);
        }
    }

    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=end){
        temp.push_back(arr[right++]);
    }

    for(int i = start ; i<=end ; i++){
        arr[i] = temp[i - start];
    }
}

int countInversions(vector<int>&arr , int start , int mid , int end){
    int count = 0;
    int right = mid + 1;
    for(int i = start ; i <= mid ; i++){
        while(right <= end && arr[i] > 2*arr[right]){
            right++;
        }
        count += right - (mid + 1);
    }
    return count;
}

int mergeSort(vector<int>&arr , int start , int end){
    int count = 0;
    if(start>=end){
        return count;
    }
    int mid =  (start + end)/2;
    count += mergeSort(arr , start , mid);
    count += mergeSort(arr,  mid+1 , end);
    count += countInversions(arr , start , mid , end);
    merge(arr , start , mid , end);
    return count;
}
int main(){
    vector<int>arr = {1,3,2,3,1};
    int n = arr.size();
    int count;
    count = mergeSort(arr , 0 , n-1);
    cout<<count;
}