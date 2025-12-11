// Find the Nth root of a number using binary search


#include<iostream>
#include<vector>
using namespace std;
int func(int mid , int n , int m){
    int ans = 1;
    for(int i = 1 ; i<=n ; i++){
        ans *= mid;
        if(ans > m){
            return 0;
        }
    }
    if(ans == m){
        return 1;
    }
    return 2;
}
int main(){
    int n = 3;
    int m = 8;
    int low = 0;
    int high = 8;
    while(low<=high){
        int mid = low + (high - low)/2;
        int raise = func(mid , n , m);
        if(raise == 1){
            cout<<mid;
            return 0;
        }
        else if(raise == 2){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<-1;
    return 0;
}