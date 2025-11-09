// Check if the array is sorted

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {2,1,3,4};
    int check = 0;
    for(int i = 1 ; i<arr.size() ; i++){
        if(arr[i-1] > arr[i]){
            check++;
        }
    }
    if(arr[0] < arr[arr.size() - 1]){
        check++;
    }

    if(check>1){
        cout<<"False";
    }
    else{
        cout<<"true";
    }

}