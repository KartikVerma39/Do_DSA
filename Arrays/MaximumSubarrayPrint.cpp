// Print Maximum Sum Subarray

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};
    int finalStart = 0;
    int finalEnd = 0;
    int finalSum = INT16_MIN;
    int sum = 0;
    int start = 0;
    for(int i = 0 ; i<arr.size() ; i++){
        sum += arr[i];
        if(sum > finalSum){
            finalSum = sum;
            finalStart = start;
            finalEnd = i;
        }
        if(sum < 0){
            sum = 0;
            start = i + 1;
        }
    }

    for(int i = finalStart; i <= finalEnd ; i++){
        cout<<arr[i]<<" ";
    }
}