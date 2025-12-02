// 735. Asteroid Collision



#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {5,10,-5};
    vector<int>st;

    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i] > 0){
            st.push_back(arr[i]);
        }
        else{
            while(!st.empty() && st.back() < abs(arr[i]) && st.back() > 0){
                st.pop_back();
            }
            if(!st.empty() && st.back() == abs(arr[i])){
                st.pop_back();
            }
            else if(st.empty() || st.back() < 0){
                st.push_back(arr[i]);
            }
        }
    }

    for(int i = 0 ; i < st.size() ; i++){
        cout<<st[i]<<" ";
    }

}