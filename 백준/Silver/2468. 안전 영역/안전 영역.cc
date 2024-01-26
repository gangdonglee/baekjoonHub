#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[102][102];
int dist[102][102];
int n;
string input;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
queue<pair<int, int> > Q;
int maxlimit, maxcnt;
int ans;

void bfs(int x, int y, int limit) {
    //dist[x][y] = true;
    dist[x][y] = 1;
    Q.push({ x, y });

    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (dist[nx][ny] == 0 && board[nx][ny] > limit) {
            
                dist[nx][ny] = 1;
                Q.push({ nx, ny });
            
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    int m, k;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> board[i][j];

            //if (board[i][j] <= n)
            //    dist[i][j] = 1;
            maxlimit = max(board[i][j], maxlimit); 
        }
    }
    for (int limit = 0; limit < maxlimit; limit++) {
        for (int i = 0; i < n; i++) 
            fill(dist[i], dist[i] + n, 0);

            
            int cnt = 0;

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {

                    if (board[i][j] > limit && dist[i][j] == 0) {

                        bfs(i, j, limit);
                        cnt++;
                    }
                }
            }

            maxcnt = max(cnt, maxcnt);


        
    }
    cout << maxcnt << endl;
    return 0;
}