#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack <int> s1;
    int n, num;
    cout << "Enter how any values you want to enter: " << endl;
    cin >> n;
    for(int i=0; i<n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        s1.push(num);
    }
    
    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }

    return 0;
    
}