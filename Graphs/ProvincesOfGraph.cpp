// 547. Number of Provinces


// class Solution {
// private:
//     void DFS(int node , vector<vector<int>>&adjLs , vector<int>&visited){
//         visited[node] = 1;
//         for(auto it:adjLs[node]){
//             if(!visited[it]){
//                 DFS(it , adjLs , visited);
//             }
//         }
//     }
// public:
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int V = isConnected.size();
//          vector<vector<int>> adjLs(V); 
//         for(int i = 0 ; i < V ; i++){
//             for(int j = 0 ; j<V ; j++){
//                 if(isConnected[i][j] == 1 && i!=j){
//                     adjLs[i].push_back(j);
//                     adjLs[j].push_back(i);
//                 }
//             }
//         }

//         vector<int>visited(V,0);
//         int count = 0;
//         for(int i = 0 ; i < V ; i++){
//             if(visited[i] != 1){
//                 count++;
//                 DFS(i , adjLs , visited);
//             }
//         }
//         return count;
//     }
// };