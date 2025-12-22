// 1901. Find a Peak Element II


#include<iostream>
#include<vector>
using namespace std;
int maxEleInRow(vector<vector<int>>&mat , int mid , int n){
    int maxi = mat[mid][0];
    int index = 0;
    for(int i = 0 ; i < n ; i++){
        if(maxi < mat[mid][i]){
            maxi = mat[mid][i];
            index = i;
        }
    }
    return index;
}
int main(){
    vector<vector<int>>mat = {{1,4},{3,2}};
    int n = mat.size();
    int m = mat[0].size();
    int low = 0;
    int high = m - 1;
    while(low<=high){
        int mid = low + (high - low)/2;
        int maxEle = maxEleInRow(mat , mid , n);
        int left = -1;
        if(mid - 1 >= 0){
            left = mat[maxEle][mid - 1];
        }
        int right = -1;
        if(mid + 1 < m){
            right = mat[maxEle][mid + 1];
        }
        if(mat[maxEle][mid] > left && mat[maxEle][mid] > right){
            cout<<maxEle<<" "<<mid;
            return 0;
        }
        else if(mat[maxEle][mid] < left){
            high  = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<-1<<" "<<-1;
    return 0;
}