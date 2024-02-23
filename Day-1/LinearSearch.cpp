#include <iostream>
using namespace std;
int main() {
    int s;
    cout << "Enter the size of the array: ";
    cin >> s;
    int arr[s], i, x;
    for(i=0; i<s; i++) {
        cout << "Enter the element: ";
        cin >> arr[i];
    }
    cout << "Enter the key: ";
    cin >> x;
    for(i=0; i<s; i++) {
        if(arr[i] == x) 
            cout << "Element found at " << i+1 << "th position" << endl;
    }
    cout << "Element not found!" << endl;
    return 0;
}