#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack <int> s1;
    s1.push(66);
    s1.push(67);
    s1.push(68);
    s1.push(69);
    s1.push(70);
    int num = 0;
    s1.push(num);
    s1.pop();
    s1.pop();
    
    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }

    return 0;
    
}