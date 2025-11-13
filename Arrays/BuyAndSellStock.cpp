// Best Time to Buy and Sell Stock


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {7,1,5,3,6,4};
    int profit = 0;
    int mini = arr[0];
    for(int i = 0 ; i < arr.size() ; i++){
        int cost = arr[i] - mini;
        profit = max(profit , cost);
        mini = min(mini , arr[i]);
    }
    cout<<profit;
}