// 240. Search a 2D Matrix II



#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int n = matrix.size();
    int m = matrix[0].size();
    int rows = 0;
    int cols = m - 1;
    int target = 17;
    while(rows<n && cols>=0){
        if(matrix[rows][cols] == target){
            cout<<"True";
            return 0;
        }
        else if(matrix[rows][cols] > target){
            cols--;
        }
        else{
            rows++;
        }
    }
    cout<<"False";
    return 0;
}