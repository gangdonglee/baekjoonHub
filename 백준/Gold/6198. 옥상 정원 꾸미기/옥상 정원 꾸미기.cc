#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> s;
	int loop = 0;
	long long total = 0;
	cin >> loop;

	for (int i = 0; i < loop; ++i)
	{
		int height = 0;
		
		cin >> height;

		if (s.empty())
		{
			s.push(height);
		}
		else
		{
			int index = 0;
			while (!s.empty() && s.top() <= height)
				s.pop();

			total += s.size();


			s.push(height);
		}


	}

	cout << total;
}