#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> s;
	int size = 0;
	cin >> size;

	for (int i = 0; i < size; ++i)
	{
		string input;
		int value;
		cin >> input;

		if (input == "push")
		{
			cin >> value;
			s.push(value);
		}
		else if (input == "top")
		{
			if (s.empty())
				cout << -1 << endl;
			else
				cout << s.top() << endl;
		}
		else if (input == "size")
		{
			cout << s.size() << endl;

		}
		else if (input == "empty")
		{
			if (s.empty())
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
		else if (input == "pop")
		{
			if (s.empty())
				cout << -1 << endl;
			else
			{
				cout << s.top() << endl;
				s.pop();
			}
		}
	}

}