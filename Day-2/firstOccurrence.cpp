int firstOccu(int arr[], int N, int key) {
    int start = 0, end = N-1, ans;
    int mid = start + (end - start) / 2;
    while (start<=end) {
        if(arr[mid]==key) {
            ans = mid;
            end = mid-1;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else if(key < arr[mid]) {
            end = mid-1;
        }
        mid = start + (end-start) / 2;
    }
    return ans;
}