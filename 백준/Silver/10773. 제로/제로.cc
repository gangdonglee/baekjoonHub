#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int input = 0;
	int total = 0;
	cin >> input;
	stack<int> s;

	for (int i = 0; i < input; ++i)
	{
		int j = 0;
		cin >> j;

		if (j == 0)
		{
			if (!s.empty())
			{
				s.pop();
			}
		}
		else
		{
			s.push(j);
		}
	}
	int size = s.size();
	for (int i = 0; i < size; ++i)
	{
		total += s.top();
		s.pop();
	}
	cout << total << endl;
}