// Max Consecutive Ones

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,1,0,1,1,1};
    int MaxOnes = 0;
    int OnesCount = 0;
    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i] == 1){
            OnesCount++;
        }
        else{
            OnesCount = 0;
        }
        MaxOnes = max(OnesCount , MaxOnes);
    }

    cout<<MaxOnes;
}