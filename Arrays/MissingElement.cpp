// Find the Missing Element 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {3,0,1};
    int sum = 0;
    for(int i = 0 ; i <= arr.size() ; i++){
        sum += i;
    }

    for(int j = 0 ; j < arr.size() ; j++){
        sum -= arr[j];
    }

    cout<<sum;


}