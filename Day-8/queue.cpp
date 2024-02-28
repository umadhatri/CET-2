#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue <int> q;
    int n, data;
    cout << "Enter the number of elements to enter: ";
    cin >> n;
    for(int i=0; i<n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> data;
        q.push(data);
    }
    cout << "The front element is: " << q.front() << endl;
    cout << "The rear element is: " << q.back() << endl;

    while(!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}
