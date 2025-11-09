// Single Number


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {2,2,1};
    int unique = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        unique = unique^arr[i];
    }
    cout<<unique;
}