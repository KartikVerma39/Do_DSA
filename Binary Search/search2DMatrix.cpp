// 74. Search a 2D Matrix


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>matrix ={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int n = matrix.size();
    int m = matrix[0].size();
    int target = 34;
    int low = 0;
    int high = (n*m)-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        int row = mid/m;
        int column = mid%m;
        if(matrix[row][column] == target){
            cout<<"True";
            return 0;
        }
        else if(matrix[row][column] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<"False";
    return 0;
}