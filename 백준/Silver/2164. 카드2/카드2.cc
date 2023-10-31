#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> Q;
    int size = 0;
    cin >> size;

    for (int i = 1; i <= size; ++i)
        Q.push(i);

    int i = 0;
    while (Q.size() > 1)
    {

        if (i % 2 == 1)
        {
            int tmp = Q.front();
            Q.push(tmp);
            Q.pop();
        }
        else
        {
            Q.pop();
        }
        ++i;
    }
    cout << Q.front();
}