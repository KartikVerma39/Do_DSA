// 4. Median of Two Sorted Arrays


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr1 = {1,2};
//     vector<int>arr2 = {3,4};

//     int n1 = arr1.size();
//     int n2 = arr2.size();
//     int n = n1 + n2;
//     int need1 = n/2;
//     int need2 = n/2 - 1;
//     int count = 0;
//     int i = 0;
//     int j = 0;
//     int ele1 = -1;
//     int ele2 = -1;


//     while(i<n1 && j<n2){
//         if(arr1[i] < arr2[j]){
//             if(count == need1){
//                 ele1 = arr1[i];
//             }
//             if(count == need2){
//                 ele2 = arr1[i];
//             }
//             count++;
//             i++;
//         }
//         else{
//             if(count == need1){
//                 ele1 = arr2[j];
//             }
//             if(count == need2){
//                 ele2 = arr2[j];
//             }
//             count++;
//             j++;
//         }
//     }


//     while(i<n1){
//         if(count == need1){
//             ele1 = arr1[i];
//         }
//         if(count == need2){
//             ele2 = arr1[i];
//         }
//         count++;
//         i++;
//     }

//     while(j<n2){
//         if(count == need1){
//             ele1 = arr2[j];
//         }
//         if(count == need2){
//             ele2 = arr2[j];
//         }
//         count++;
//         j++;
//     }

//     if(n%2 == 1){
//         cout<<ele1;
//         return 0;
//     }

//     cout<<(double)(ele1 + ele2)/2;
// }



// Binary Search Approach



#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr1 = {1,2};
    vector<int>arr2 = {3,4};
    int n1 = arr1.size();
    int n2 = arr2.size();
    int n = n1 + n2;
    int low = 0;
    int high = n1;
    int left = (n1 + n2 + 1)/2;
    while(low<=high){
        int mid1 = low + (high - low)/2;
        int mid2 = left - mid1;
        int l1 = INT16_MIN;
        int l2 = INT16_MIN;
        int r1 = INT16_MAX;
        int r2 = INT16_MAX;
        if(mid1 < n1){
            r1 = arr1[mid1];
        }
        if(mid2 < n2){
            r2 = arr2[mid2];
        }
        if(mid1 - 1 >= 0){
            l1 = arr1[mid1 - 1];
        }
        if(mid2 - 1 >= 0){
            l2 = arr2[mid2 - 1];
        }
        if(l1 <= r2 && l2 <= r1){
            if(n%2 == 0){
                cout<< (max(l1 , l2) + min(r1 , r2))/2.0;
                return 0;
            }
            else{
                cout<< max(l1 , l2);
                return 0;
            }
        }
        else if(l1 > r2){
            high = mid1 - 1;
        }
        else{
            low = mid1 + 1;
        }
    } 
    cout<<0;
    return 0; 
}