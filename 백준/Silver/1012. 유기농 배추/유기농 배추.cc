#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[51][51];
bool dist[51][51];
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int loop;
    cin >> loop;
    while(loop--)
    {
      
        int total;

        cin >> m >> n >> total;
        queue<pair<int, int> > Q;
        int x, y;

        for (int i = 0; i < total; ++i)
        {
            cin >> x >> y;
            board[y][x] = 1;
          
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 1 && !dist[i][j]) {
                    dist[i][j] = true;
                    Q.push({ i,j });
                    while (!Q.empty()) {
                        auto cur = Q.front(); Q.pop();
                        for (int dir = 0; dir < 4; dir++) {
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                            if (dist[nx][ny] || board[nx][ny] != 1) continue;
                            dist[nx][ny] = true;
                            Q.push({ nx,ny });
                        }
                    }

                    res++;
                }
            }
        }

        cout << res << "\n";
        for (int i = 0; i < 51; i++) {
            fill(board[i], board[i] + 51, 0);
            fill(dist[i], dist[i] + 51, false);
        }
      
    }
}