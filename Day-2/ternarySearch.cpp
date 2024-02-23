#include <iostream>
using namespace std;

int ternarySearch(int arr[], int N, int key) {
    int left = 0, right = N-1;
    while(left<=right) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        if(arr[mid1] == key)
            return mid1;
        if(arr[mid2] == key)
            return mid2;
        if(key > arr[mid2]) {
            left = mid2 - 1;
        } else if (key < arr[mid1]) {
            right = mid1 + 1;
        } else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
    return -1;
}

int main() {
    
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int N = (sizeof(arr)/sizeof(arr[0]));
    int key = 30;
    int ans = ternarySearch(arr, N, key);
    if(ans == -1)
        cout << "Element not found!" << endl;
    else 
        cout << "Element found at: " << ans << endl;
    
    
    return 0;
}