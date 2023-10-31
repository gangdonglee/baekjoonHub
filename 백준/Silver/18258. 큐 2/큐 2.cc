#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> Q;
    int size = 0;
    cin >> size;

    while(size--)
    {
        string str;
        int j = 0;
        cin >> str;

        if (str == "push")
        {
            cin >> j;
            Q.push(j);
        }
        else if (str == "front")
        {
            if (Q.empty())
                cout << -1 << '\n';
            else
            {
                cout << Q.front() << '\n';
            }
        }
        else if (str == "back")
        {
            if (Q.empty())
                cout << -1 << '\n';
            else
                cout << Q.back() << '\n';
        }
        else if (str == "size")
        {
            cout << Q.size() << '\n';
        }
        else if (str == "empty")
        {
            cout << Q.empty() << '\n';
        }
        else if (str == "pop")
        {
            if (Q.empty())
                cout << -1 << '\n';
            else
            {
                cout << Q.front() << '\n';
                Q.pop();
            }

        }

    }
}