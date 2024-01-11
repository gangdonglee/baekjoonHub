#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
char board[1001][1001];
int dist[1001][1001];
int l;

int x, y; // 내 현재 위치
int x2, y2; // 도착할 위치

int dx[8] = { 1, 2, 2, 1,-1,-2,-2,-1 };
int dy[8] = { -2,-1, 1, 2,2, 1,-1,-2 };

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int loop;
    cin >> loop;

    while (loop--)
    {
		cin >> l; //체스판 넓이
		cin >> x >> y;
		cin >> x2 >> y2;

		queue<pair<int, int>> Q;
		Q.push({ x, y });


		while (!Q.empty()) {
			auto cur = Q.front(); Q.pop();

			if (cur.X == x2 && cur.Y == y2)
			{
				cout << 0 << "\n";
				Q = queue<pair<int, int>>();
				break;
			}

			for (int dir = 0; dir < 8; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx == x2 && ny == y2)
				{
					cout << dist[cur.X][cur.Y] + 1 << "\n";
					Q = queue<pair<int, int>>();
					break;
				}

				if (nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
				if (dist[nx][ny] > 0) continue;
				dist[nx][ny] = dist[cur.X][cur.Y] + 1;

				Q.push({ nx, ny });
			}
		}

		for (int i = 0; i < l; i++)
			fill(dist[i], dist[i] + l , 0);


    }
}