// Majority Element or Greater than n/2

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {2,2,1,1,1,2,2};
    int count = 0;
    int number = 0;
    for(int i = 0  ; i < arr.size() ; i++){
        if(count == 0){
            count++;
            number = arr[i];
        }
        else if(number != arr[i]){
            count--;
        }
        else{
            count++;
        }   
    }

    int finalcount = 0;
    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i] == number){
            finalcount++;
        }
    }

    if(finalcount > arr.size()/2){
        cout<<number;
    }
}