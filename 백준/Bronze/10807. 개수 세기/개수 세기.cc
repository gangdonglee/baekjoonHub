#include <iostream>
using namespace std;

int a[101] = {};

int n, v;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> v;

	for (int i = 0; i < n; i++) {
		if (v == a[i])
			++ans;
	}
	cout << ans;
}