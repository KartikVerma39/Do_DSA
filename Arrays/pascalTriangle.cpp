// 118. Pascal's Triangle


#include<iostream>
#include<vector>
using namespace std;
vector<int>generateRows(int row){
    vector<int>ansRow;
    int ans = 1;
    ansRow.push_back(1);
    for(int col = 1 ; col < row ; col++){
        ans = ans * (row - col);
        ans = ans/col;
        ansRow.push_back(ans);
    }
    return ansRow;
}
int main(){
    int N = 5;
    vector<vector<int>>ans;
    for(int i = 1 ; i <= N ; i++){
        ans.push_back(generateRows(i));
    }

    for(int i = 0 ; i < ans.size() ; i++){
        for(int j = 0 ; j < ans[i].size() ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}