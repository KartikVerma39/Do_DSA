#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {3,1,-2,-5,2,-4};
    int even = 0;
    int odd = 1;
    vector<int>ans(arr.size());
    for(int i = 0  ; i < arr.size() ; i++){
        if(arr[i] >= 0){
            ans[even] = arr[i];
            even = even + 2;
        }
        else if(arr[i]%2 <= 0){
            ans[odd] = arr[i];
            odd = odd + 2;
        }
    }

    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}