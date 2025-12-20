// 4. Median of Two Sorted Arrays


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr1 = {1,2};
    vector<int>arr2 = {3,4};

    int n1 = arr1.size();
    int n2 = arr2.size();
    int n = n1 + n2;
    int need1 = n/2;
    int need2 = n/2 - 1;
    int count = 0;
    int i = 0;
    int j = 0;
    int ele1 = -1;
    int ele2 = -1;


    while(i<n1 && j<n2){
        if(arr1[i] < arr2[j]){
            if(count == need1){
                ele1 = arr1[i];
            }
            if(count == need2){
                ele2 = arr1[i];
            }
            count++;
            i++;
        }
        else{
            if(count == need1){
                ele1 = arr2[j];
            }
            if(count == need2){
                ele2 = arr2[j];
            }
            count++;
            j++;
        }
    }


    while(i<n1){
        if(count == need1){
            ele1 = arr1[i];
        }
        if(count == need2){
            ele2 = arr1[i];
        }
        count++;
        i++;
    }

    while(j<n2){
        if(count == need1){
            ele1 = arr2[j];
        }
        if(count == need2){
            ele2 = arr2[j];
        }
        count++;
        j++;
    }

    if(n%2 == 1){
        cout<<ele1;
        return 0;
    }

    cout<<(double)(ele1 + ele2)/2;
}