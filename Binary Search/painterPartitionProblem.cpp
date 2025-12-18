// The Painter's Partition Problem




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxi(vector<int> arr) {
    int maximum = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        maximum = max(arr[i], maximum);
    }
    return maximum;
}

int sumission(vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum;
}

bool possible(vector<int> arr, int mid, int k) {
    int totalPages = 0;
    int students = 1;

    for (int i = 0; i < arr.size(); i++) {
        if (totalPages + arr[i] <= mid) {
            totalPages += arr[i];
        } else {
            students++;
            totalPages = arr[i];
        }

        if (students > k) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {7,2,5,10,8};
    int k = 2;

    int n = arr.size();
    if (n < k) {
        cout << -1;
        return 0;
    }

    int low = maxi(arr);
    int high = sumission(arr);

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (possible(arr, mid, k)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << low;
    return 0;
}
