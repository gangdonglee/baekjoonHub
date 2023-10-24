#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int index = 0;
	int loop = 0;
	int value = 0;
	stack<pair<int, int>> s;

	s.push({ 100000001, 0 });
	cin >> loop;

	for (int i = 1; i <= loop; ++i)
	{
		cin >> value;
		while (s.top().first < value)
			s.pop();
		if (value < s.top().first)
		{
			index = i;
		}
		cout << s.top().second << " ";
		s.push({ value, i });
	}
}