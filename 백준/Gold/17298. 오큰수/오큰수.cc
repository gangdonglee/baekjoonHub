#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<int> s;
    vector<int> vec;
    vector<int> result;
    int size = 0;
    cin >> size;
    vec.reserve(size);
    result.reserve(size);
    for (int i = 0; i < size; ++i)
    {
        int input = 0;
        cin >> input;
        vec.emplace_back(input);
        result.emplace_back(0);
    }

    for (int i = size - 1; i >= 0; --i)
    {
        while ((!s.empty()) && s.top() <= vec[i])
            s.pop();

        if (s.empty())
            result[i] = -1;
        else
            result[i] = s.top();

        s.push(vec[i]);
    }
    
    for (int i = 0; i < size; ++i)
        cout << result[i] << " ";

    return 0;
}