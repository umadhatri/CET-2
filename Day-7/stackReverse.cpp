#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    stack <char> s1;
    int i;
    cin >> str;

    for(i=0; i<str.length(); i++) {
        s1.push(str[i]);
    }

    while (!s1.empty())
    {
        cout << s1.top();
        s1.pop();
    }
    cout << endl;

    return 0;
}

