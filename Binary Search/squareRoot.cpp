// Square Root


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 4;
    int low = 0;
    int high = n;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(mid * mid <= n){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<high;
    return 0;
}