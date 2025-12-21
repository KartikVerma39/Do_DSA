// K-th element of two Arrays



#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr1 = {1,4,8,10};
    vector<int>arr2 = {2,3,6,7,9};
    int k = 5;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int n = n1 + n2;
    int low = max(0 , k - n2);
    int high = min(k , n1);
    int left = k;
    while(low<=high){
        int mid1 = low + (high - low)/2;
        int mid2 = left - mid1;
        int l1 = INT8_MIN;
        int l2 = INT8_MIN;
        int r1 = INT16_MAX;
        int r2 = INT16_MAX;

        if(mid1<n1){
            r1 = arr1[mid1];
        }
        if(mid2<n2){
            r2 = arr2[mid2];
        }
        if(mid1 - 1 >= 0){
            l1 = arr1[mid1 - 1];
        }
        if(mid2 - 1 >= 0){
            l2 = arr2[mid2 - 1];
        }
        if(l1<=r2 && l2<=r1){
            cout<<max(l1,l2);
            return 0;
        }
        if(l1 > r2){
            high = mid1 - 1; 
        }
        else{
            low = mid1 + 1;
        }
    }
    cout<<0;
    return 0;
}