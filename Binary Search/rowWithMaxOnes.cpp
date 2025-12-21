// Row with max 1s


#include<iostream>
#include<vector>
using namespace std;
int numberOfOnes(vector<int>arr){
    int m = arr.size();
    int low = 0;
    int high = m - 1;
    int count = 0;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] > 0){
            count = m - mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return count;
}
int main(){
    vector<vector<int>>arr = {{0,1,1,1}, {0,0,1,1}, {1,1,1,1} , {0,0,0,0}};
    int maxOnes = 0;
    int index = -1;
    for(int i = 0 ; i < arr.size() ; i++){
        int count = numberOfOnes(arr[i]);
        if(count > maxOnes){
            maxOnes = count;
            index = i;
        }
    }
    cout<<index;
    return 0;
}