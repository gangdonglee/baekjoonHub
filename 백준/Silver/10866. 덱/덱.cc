// Authored by : OceanShape
// Co-authored by : -
// http://boj.kr/de9183460fa945a69e8692510b3fd803
#include <bits/stdc++.h>
using namespace std;

int N;
queue<int> q;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    /*
    정수를 저장하는 덱(Deque)를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여덟 가지이다.

push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 덱에 들어있는 정수의 개수를 출력한다.
empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    
    */

    deque<int> d;
    int input = 0;
    cin >> input;

    while (input--)
    {
        string s;
        cin >> s;
        int i;
        if (s == "push_front")
        {
            cin >> i;
            d.push_front(i);
        }
        else if (s == "push_back")
        {
            cin >> i;
            d.push_back(i);
        }
        else if (s == "pop_front")
        {
            if (d.empty())
                cout << -1 << "\n";
            else
            {
                cout << d.front() << "\n";
                d.pop_front();
            }
        }
        else if (s == "pop_back")
        {
            if (d.empty())
                cout << -1 << "\n";
            else
            {
                cout << d.back() << "\n";
                d.pop_back();
            }
        }
        else if (s == "size")
        {
            cout << d.size() << "\n";
        }
        else if (s == "empty")
        {
            if (d.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (s == "front")
        {
            if (d.empty())
                cout << -1 << "\n";
            else
                cout << d.front() << "\n";
        }
        else if (s == "back")
        {
            if (d.empty())
                cout << -1 << "\n";
            else
                cout << d.back() << "\n";
        }
    }
}