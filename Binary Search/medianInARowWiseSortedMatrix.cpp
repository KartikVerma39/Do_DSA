// Median in a row-wise sorted Matrix


#include<iostream>
#include<vector>
using namespace std;
int minEle(vector<vector<int>>mat , int n){
    int mini = mat[0][0];
    for(int i = 1 ; i < n ; i++){
        mini = min(mini , mat[i][0]);
    }
    return mini;
}

int maxEle(vector<vector<int>>mat , int m , int n){
    int maxi = mat[0][m-1];
    for(int i = 1 ; i < n ; i++){
        maxi = max(maxi , mat[i][m - 1]);
    }
    return maxi;
}

int blackBox(vector<int>mat , int m , int x){
    int low = 0;
    int high = m - 1;
    int ans = m;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(mat[mid] > x){
            high = mid - 1;
            ans = mid;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int count(vector<vector<int>>mat , int m , int n , int x){
    int count = 0;
    for(int i = 0 ; i<n ; i++){
        count+=blackBox(mat[i] , m , x);
    }
    return count;
}


int main(){
    vector<vector<int>>mat = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    int n = mat.size();
    int m = mat[0].size();
    int low = minEle(mat , n);
    int high = maxEle(mat , m , n);
    int req = (n*m)/2;
    while(low<=high){
        int mid = low + (high - low)/2;
        int countNo = count(mat , m , n , mid);
        if(req<countNo){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<low;
    return 0;
}