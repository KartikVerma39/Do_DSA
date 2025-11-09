// Remove duplicates from Sorted array

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {0,0,1,1,1,2,2,3,3,4};
    int start = 0;
    int index = 0;
    while(start < arr.size()){
        if(arr[index] != arr[start]){
            index++;
            swap(arr[index] , arr[start]);
        }
        start++;
    }
    for(int i = 0 ; i < index+1 ; i++){
        cout<<arr[i]<<" ";
    }
}