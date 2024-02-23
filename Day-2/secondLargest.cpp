#include <iostream>
using namespace std;

int secondLargest(int arr[], int N) {
    int largest = 0;
    int second = -1;
    for(int i=1; i<N; i++) {
        if(arr[i] > arr[largest]) {
            second = largest;
            largest = i;
        }
        else if(arr[i] < arr[largest]) {
            if (second == -1 || arr[second] < arr[i]) {
                second = i;
            }
        }
    }
    return arr[second];
}

int main() {
    
    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int N = (sizeof(arr) / sizeof(arr[0]));
    int sec = secondLargest(arr, N);
    cout << sec << endl;
    
    return 0;
}