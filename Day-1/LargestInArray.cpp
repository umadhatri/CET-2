#include <iostream>
using namespace std;
int main() {
    int s;
    cout << "Enter the number of elements: ";
    cin >> s;
    int arr[s], i, l;
    for (i=0; i<s; i++) {
        cout << "Enter an element: ";
        cin >> arr[i];
    }
    l = arr[0];
    for(i=1; i<s; i++) {
             if(arr[i] >= l) 
                       l = arr[i];
    }
    cout << "The largest element is: " << l << endl;
}