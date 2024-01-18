#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[101][101];
int dist[101][101];
int n;
string input;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
queue<pair<int, int> > Q;
int res = 0; // 적록색약 아닌 경우
vector<int> vec;

void bfs(int x, int y) {
    //dist[x][y] = true;
    dist[x][y] = 1;
    Q.push({ x, y });
    res++;
    int cnt = 1;
    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (dist[nx][ny] == 1 || board[nx][ny] == 0) continue;
            dist[nx][ny] = 1;
            cnt++;
            Q.push({ nx, ny });
        }
    }
   
    vec.emplace_back(cnt);
}


/*
7
0110100
0110101
1110101
0000111
0100000
0111110
0111000
*/

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vec.reserve(101);
    cin >> n;


    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        for (int j = 0; j < n; ++j)
        {
            const char ch = input[j];
            board[i][j] = atoi(&ch);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 0 || dist[i][j] == 1) 
            {
                continue;
            }
                bfs(i, j);
        }
    }
    
    cout << res << '\n';
    sort(vec.begin(), vec.end());
    for (int i : vec)
        cout << i << '\n';
    return 0;
}