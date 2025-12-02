// 2104. Sum of Subarray Ranges


// class Solution {
// public:
//     vector<int>NSE(vector<int>arr){
//         int n = arr.size();
//         vector<int>ans(n);
//         stack<int>st;

//         for(int i = n-1 ; i >= 0 ; i--){
//             while(!st.empty() && arr[st.top()] >= arr[i]){
//                 st.pop();
//             }
//             if(st.empty()){
//                 ans[i] = n;
//             } 
//             else{
//                 ans[i] = st.top();
//             }
//             st.push(i);
//         }
//         return ans;
//     }

//     vector<int>PSE(vector<int>arr){
//          int n = arr.size();
//         vector<int>ans(n);
//         stack<int>st;

//         for(int i = 0 ; i < n ; i++){
//             while(!st.empty() && arr[st.top()] > arr[i]){
//                 st.pop();
//             }
//             if(st.empty()){
//                 ans[i] = -1;
//             } 
//             else{
//                 ans[i] = st.top();
//             }
//             st.push(i);
//         }
//         return ans;
//     }

//     vector<int>NGE(vector<int>arr){
//         int n = arr.size();
//         vector<int>ans(n);
//         stack<int>st;

//         for(int i = n-1 ; i >= 0 ; i--){
//             while(!st.empty() && arr[st.top()] <= arr[i]){
//                 st.pop();
//             }
//             if(st.empty()){
//                 ans[i] = n;
//             } 
//             else{
//                 ans[i] = st.top();
//             }
//             st.push(i);
//         }
//         return ans;
//     }

//     vector<int>PGE(vector<int>arr){
//          int n = arr.size();
//         vector<int>ans(n);
//         stack<int>st;

//         for(int i = 0 ; i < n; i++){
//             while(!st.empty() && arr[st.top()] < arr[i]){
//                 st.pop();
//             }
//             if(st.empty()){
//                 ans[i] = -1;
//             } 
//             else{
//                 ans[i] = st.top();
//             }
//             st.push(i);
//         }
//         return ans;
//     }

//     long long minSubarraySum(vector<int>arr){
//         vector<int>l = PSE(arr);
//         vector<int>r = NSE(arr);

//         long long sumMinimum = 0;

//         for(int i  = 0 ; i < arr.size() ; i++){
//             long long left = i - l[i];
//             long long right = r[i] - i;
//             long long totalSubarray = left * right;
//             long long totalSum = totalSubarray*arr[i];
//             sumMinimum = sumMinimum + totalSum;
//         }

//         return sumMinimum;
//     }

//     long long maxSubarraySum(vector<int>arr){
//         vector<int>l = PGE(arr);
//         vector<int>r = NGE(arr);

//         long long sumMaximum = 0;

//         for(int i  = 0 ; i < arr.size() ; i++){
//             long long left = i - l[i];
//             long long right = r[i] - i;
//             long long totalSubarray = left * right;
//             long long totalSum = totalSubarray*arr[i];
//             sumMaximum = sumMaximum + totalSum;
//         }

//         return sumMaximum;
//     }

//     long long subArrayRanges(vector<int>& nums) {
//         long long maxSum = maxSubarraySum(nums);
//         long long minSum = minSubarraySum(nums);

//         long long range = maxSum - minSum;
//         return range;

//     }
// };