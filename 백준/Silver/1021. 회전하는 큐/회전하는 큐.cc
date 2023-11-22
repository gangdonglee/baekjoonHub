// Authored by : OceanShape
// Co-authored by : -
// http://boj.kr/de9183460fa945a69e8692510b3fd803
#include <bits/stdc++.h>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    /*
    1. 덱에 1~N까지의 값을 넣습니다.
2. 찾아야하는 숫자의 인덱스 번호를 확인합니다.
3. 인덱스 번호를 통해 왼쪽으로 가는 경우와
   오른쪽으로 가는 경우에 대해서 빠른 경로를 찾습니다.
4. 빠른 방향으로 이동하면서 횟수만큼 카운트를 증가합니다.
5. 찾은 수를 pop시킵니다.
6. 찾는 수들을 다 찾을 때 까지 2~5를 반복합니다.
    
    
    */
    deque<int> d;
    int M, N;

    cin >> N;
    for (int i = 1; i <= N; ++i)
        d.emplace_back(i);

    cin >> M;
    int res = 0;
    for (int i = 0; i < M; ++i)
    {
        int input = 0;
        cin >> input;
        int findIdx = find(d.begin(), d.end(), input) - d.begin();
        
        while (d.front() != input)
        {
            if (findIdx < d.size() - findIdx) 
            {
                d.push_back(d.front());
                d.pop_front();
            }
            else 
            {
                d.push_front(d.back());
                d.pop_back();
            }
            res++;
        }
        d.pop_front();
    }
    cout << res;

}