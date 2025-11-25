#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    vector<int>arr = {1,1,1,2,2,3};
    unordered_set<int>st;
    for(auto it : arr){
        st.insert(it);
    }

    int seq = 1;

    for(auto it:st){
        if(st.find(it-1) == st.end()){
            int num = it;
            int count = 1;
            while(st.find(num+1) != st.end()){
                num = num + 1;
                count = count + 1;
            }  
            seq = max(seq , count);
        }
    }

    cout<<seq;

}