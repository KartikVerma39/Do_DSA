// Largest Element in an Array

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {3,21,23,1,4,2,5,9};
    int large = arr[0];
    for(int i  = 0 ; i < arr.size() ; i++){
        if(large < arr[i]){
            large = arr[i];
        }
    }
    cout<<large;
}