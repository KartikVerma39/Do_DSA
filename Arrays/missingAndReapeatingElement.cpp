// Find the repeating and missing number



#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,2,2,4};
    long long n = arr.size();
    long long Sn = (n*(n+1))/2;
    long long S2n = (n*(n+1) * (2*n + 1))/6;

    long long S = 0;
    long long S2 = 0;

    for(int i = 0 ; i < n ; i++){
        S += arr[i];
        S2 += arr[i] * arr[i];
    }

    long long val1 = S - Sn;
    long long val2 = S2 - S2n;

    val2 = val2/val1;
    long long x = (val1 + val2)/2;
    long long y = x - val1;

    cout<<x<<":"<<y;

}