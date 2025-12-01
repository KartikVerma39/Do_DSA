// 29. Majority Element II


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {3,2,3};
    int el1 = INT16_MIN;
    int el2 = INT16_MIN;

    int count1 = 0;
    int count2 = 0;

    for(int i = 0 ; i < arr.size() ; i++){
        if(count1 == 0 && el2 != arr[i]){
            count1 = 1;
            el1 = arr[i];
        }
        else if(count2 == 0 && el1 != arr[i]){
            count2 = 1;
            el2 = arr[i];
        }
        else if(el1 == arr[i]){
            count1++;
        }
        else if(el2 == arr[i]){
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }


    int freq1 = 0;
    int freq2 = 0;

    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] == el1){
            freq1++;
        }
        if(arr[i] == el2){
            freq2++;
        }
    }


    int condition = arr.size()/3;

    vector<int>ls;

    if(freq1 > condition){
        ls.push_back(el1);
    }

    if(freq2 > condition){
        ls.push_back(el2);
    }

    for(int i = 0 ; i < ls.size() ; i++){
        cout<<ls[i]<<" ";
    }

}