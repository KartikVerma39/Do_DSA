// Left rotate an array by D places

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4,5,6,7};
    int k = 3;
    int start = 0;
    int end = arr.size() - 1;
    k = k%arr.size();
    while(start<end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

    start = 0;
    end = k-1;

    while(start<end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

    start = k;
    end = arr.size() - 1;

    while(start<end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}