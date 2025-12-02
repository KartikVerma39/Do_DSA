// 402. Remove K Digits



#include<iostream>
#include<stack>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "1432219";
    int k = 3;

    stack<char>st;

    for(int i = 0 ; i < s.size() ; i++){
        while(!st.empty() && k>0 && (st.top() - '0') > (s[i] - '0')){
            st.pop();
            k = k-1;
        }
        st.push(s[i]);
    }


    while(k>0){
        st.pop();
        k = k-1;
    }

    if(st.empty()){
        cout<<"0";
        return 0;
    }

    string res = "";

    while(!st.empty()){
        res+=st.top();
        st.pop();
    }

    while(res.size()!=0 && res.back() == '0'){
        res.pop_back();
    }

    reverse(res.begin() , res.end());

    if(res.empty()){
        cout<<"0";
        return 0;
    }

    cout<<res;
    return 0;
}