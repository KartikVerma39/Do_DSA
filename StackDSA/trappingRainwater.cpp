// 42. Trapping Rain Water


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {0,1,0,2,1,0,1,3,2,1,2,1};
    int l = 0;
    int n = arr.size();
    int r = n-1;
    int total = 0;
    int lmax = 0;
    int rmax = 0;

    while(l<r){
        lmax = max(arr[l] , lmax);
        rmax = max(arr[r] , rmax);

        if(lmax < rmax){
            total += lmax - arr[l];
            l++;
        }
        else{
            total += rmax - arr[r];
            r--;
        }
    }

    cout<<total;
}