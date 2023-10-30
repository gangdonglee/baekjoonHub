#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> Q;
    int size = 0;
    cin >> size;

    for (int i = 0; i < size; ++i)
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
                cout << -1 << endl;
            else
            {
                cout << Q.front() << endl;
            }
        }
        else if (str == "back")
        {
            if (Q.empty())
                cout << -1 << endl;
            else
                cout << Q.back() << endl;
        }
        else if (str == "size")
        {
            cout << Q.size() << endl;
        }
        else if (str == "empty")
        {
            cout << Q.empty() << endl;
        }
        else if (str == "pop")
        {
            if (Q.empty())
                cout << -1 << endl;
            else
            {
                cout << Q.front() << endl;
                Q.pop();
            }

        }
        
    }
}