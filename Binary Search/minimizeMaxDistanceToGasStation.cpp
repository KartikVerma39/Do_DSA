// Minimize Max Distance to Gas Station



// #include<iostream>
// #include<vector>
// using namespace std;
// int noOfStations(vector<int>&arr , int dist){
//     int count = 0;
//     for(int i = 1 ; i < arr.size() ; i++){
//         int totals = arr[i] - arr[i-1]/dist;
//         if(totals == totals * dist){
//             totals--;
//         }
//         count += totals;
//     }
//     return count;
// }
// int main(){
//     vector<int>arr = {1, 2, 3, 4, 5};
//     int n = arr.size();
//     int k = 2;
//     long double low = 0;
//     long double high = 0;
//     for(int i = 0 ; i < n - 1 ; i++){
//         high = max(high ,(long double)arr[i+1] - arr[i]);
//     }

//     long double limit = 1e-6;
//     while(high - low < limit){
//         int mid = low + (high - low)/2.0;
//         int stations = noOfStations(arr , mid);
//         if(stations > k){
//             low = mid;
//         }
//         else{
//             high = mid;
//         }
//     }
//     cout<<high;
//     return 0;
// }




// Heap Approach

 
