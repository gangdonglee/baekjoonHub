
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[2][7] = { 0 };

	int N, K;
	int res = 0;

	cin >> N >> K;

	for (int i = 0; i < N; i++) 
	{
		int S, G;
		cin >> S >> G;

		arr[S][G]++;
	}

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 7; ++j)
		{
			if (arr[i][j] != 0)
			{

				res += arr[i][j] / K;

				if (arr[i][j] % K != 0)
					res++;
			}

		}
	}

	cout << res << endl;
}
