#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dist[1000002];
int n;
string input;
int dx[2] = { 0, 0 };

int F, S, G, U, D;
queue<int> Q;
int ans = 0;

void bfs() {
    //dist[x][y] = true;
    dist[S] = 0;
    Q.push(S);
  
    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();

        for (int dir = 0; dir < 2; dir++) {
            int nx =  cur + dx[dir];
            
            if (nx <= 0 || nx > F) continue;
            if (dist[nx] != -1 ) continue;

            dist[nx] = dist[cur] + 1;
            Q.push({ nx });
        }
     
    }

}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> F >> S >> G >> U >> D;


    fill(dist + 1, dist + F + 1, -1);

    dx[0] = U;
    dx[1] = D * -1;

    bfs();

    if (dist[G] == -1) cout << "use the stairs";
    else cout << dist[G];
  
    return 0;
}