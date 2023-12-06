#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int board[502][502];
//{ {1,1,1,0,1,0,0,0,0,0},
// {1,0,0,0,1,0,0,0,0,0},
// {1,1,1,0,1,0,0,0,0,0},
// {1,1,0,0,1,0,0,0,0,0},
// {0,1,0,0,0,0,0,0,0,0},
// {0,0,0,0,0,0,0,0,0,0},
// {0,0,0,0,0,0,0,0,0,0} }; // 1이 파란 칸, 0이 빨간 칸에 대응

bool vis[502][502];
int n = 0, m = 0;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];
	
	int mx = 0; // 그림의 최댓값
	int num = 0; // 그림의 수

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {

			if (board[i][j] == 0 || vis[i][j])
				continue;

			num++;

			queue<pair<int, int>> Q;
			vis[i][j] = 1;
			Q.push({ i, j });
			int area = 0; // 그림의 넓이
			while (!Q.empty()) {
				pair<int, int> cur = Q.front(); Q.pop();
				// cout << '(' << cur.X << ", " << cur.Y << ") -> ";
				++area;
				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (vis[nx][ny] || board[nx][ny] != 1) continue;

					vis[nx][ny] = 1;
					Q.push({ nx, ny });
				}
			}
			mx = max(mx, area);
		}
	}
	cout << num << '\n' << mx;
}