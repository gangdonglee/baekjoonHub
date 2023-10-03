#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

  
    int a[26] = {}; // 각 문자의 개수를 저장하는 배열
    string s1, s2;
    cin >> s1 >> s2;
    int res = 0;
    for (auto c : s1)
    {
        a[c - 'a']++; // 첫 번째 문자열의 각 문자는 개수+1
    }
    for (auto c : s2) a[c - 'a']--; // 두 번째 문자열의 각 문자는 개수-1

        
        
    // 중괄호가 없어도 문제는 없으나 가독성을 위해 삽입
    for (int i : a) 
    {
        if (i != 0)
        {
            if (i < 0)
            {
                res += (i * -1);
            }
            else
            {
                res += i;
            }
        }
    }

    cout << res << endl;
    
}