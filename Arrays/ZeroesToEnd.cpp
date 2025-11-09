// Move Zeros to end


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {0,1,0,3,12};
    int start = 0;
    int index = 0;
    while(start<arr.size()){
        if(arr[start] != 0){
            swap(arr[start] , arr[index]);
            index++;
        } 
        start++;
    }

    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
}