#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[101][101];
int board2[101][101];
int dist[101][101];
int dist2[101][101];
int n;
string input;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
queue<pair<int, int> > Q;
int res = 1; // 적록색약 아닌 경우
int res2 = 1;

void bfs(int x, int y, int color) {
    //dist[x][y] = true;
    Q.push({ x, y });
    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (dist[nx][ny] > 0 || board[nx][ny] != color) continue;
            dist[nx][ny] = res;
            Q.push({ nx, ny });
        }
    }
    res++;
}

void bfs2(int x, int y, int color) {
    //dist[x][y] = true;
    Q.push({ x, y });
    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (dist2[nx][ny] > 0 || board2[nx][ny] != color) continue;
            dist2[nx][ny] = res2;
            Q.push({ nx, ny });
        }
    }
    res2++;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    

    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        for (int j = 0; j < input.size(); ++j)
        {
            //board[i][j] = input[j];
            if (input[j] == 'R')
            {
                board[i][j] = 1;
                board2[i][j] = 1;
            }
            else if (input[j] == 'G')
            {
                board[i][j] = 2;
                board2[i][j] = 1;
            }
            else if (input[j] == 'B')
            {
                board[i][j] = 3;
                board2[i][j] = 3;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 1 && dist[i][j] == 0) {
                bfs(i, j, 1);
               
            }
            else if (board[i][j] == 2 && dist[i][j] == 0) {
                bfs(i, j, 2);  
            }
            else if (board[i][j] == 3 && dist[i][j] == 0) {
                bfs(i, j, 3);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board2[i][j] == 1 && dist2[i][j] == 0) {
                bfs2(i, j, 1);

            }
            else if (board2[i][j] == 3 && dist2[i][j] == 0) {
                bfs2(i, j, 3);
            }
        }
    }


    cout << res - 1 << " " << res2 - 1 << "\n";
}