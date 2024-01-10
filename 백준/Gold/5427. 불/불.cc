#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
char board[1001][1001];
int dist[1001][1001];
int dist2[1001][1001];
int m, n;
string input;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int loop;
    cin >> loop;

    while (loop--)
    {
        cin >> m >> n;
		bool escape = false;
		queue<pair<int, int>> Q;
		queue<pair<int, int>> Q2;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> board[i][j];
				
				if (board[i][j] == '@')
					Q.push({ i, j });
				else if (board[i][j] == '*')
					Q2.push({ i, j });
			}
		}

		while (!Q2.empty()) {
			auto cur = Q2.front(); Q2.pop();
			for (int dir = 0; dir < 4; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
				if (board[nx][ny] == '#') continue;
				if (dist2[nx][ny]) continue;
				dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
				Q2.push({ nx, ny });
			}
		}


		while (!Q.empty() && (!escape)) {
			auto cur = Q.front(); Q.pop();
			for (int dir = 0; dir < 4; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				{
					cout << dist[cur.X][cur.Y] + 1 << '\n';
					escape = true;
					break;
				}
				
				if ( board[nx][ny] != '.') continue;
				if (dist[nx][ny]) continue;
				if (dist2[nx][ny] != 0 && dist2[nx][ny] <= dist[cur.X][cur.Y] + 1) continue;
				dist[nx][ny] = dist[cur.X][cur.Y] + 1;
				Q.push({ nx, ny });

			}
		}
		if (!escape) cout << "IMPOSSIBLE" << '\n';
		for (int i = 0; i < 1001; i++) fill(dist2[i], dist2[i] + 1001, 0);
		for (int i = 0; i < 1001; i++) fill(dist[i], dist[i] + 1001, 0);
    }
}