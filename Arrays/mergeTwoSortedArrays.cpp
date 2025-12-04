// Merge Without Extra Space


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a = {2, 4, 7, 10};
    vector<int>b = {2, 2, 3, 4};


    int n = a.size();
    int m = b.size();

    int left = n - 1;
    int right = 0;

    while(left>=0 && right<m){
        if(a[left] > b[right]){
            swap(a[left] , b[right]);
            left--;
            right++;
        }
        else{
            break;;
        }
    }

    sort(a.begin() , a.end());
    sort(b.begin() , b.end());

    for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<" ";
    }

    for(int i = 0 ; i < b.size() ; i++){
        cout<<b[i]<<" ";
    }



}