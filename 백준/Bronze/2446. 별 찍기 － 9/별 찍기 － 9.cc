#include <iostream>

using namespace std;

int main()
{
	int  a = 0;
	cin >> a;

	for (int i = a; i > 0; --i)
	{
		for (int k = i; k < a; ++k)
		{
			cout << " ";
		}
		for (int j = i; j > 0; --j)
		{
				cout << "*";
		}
		for(int r = i -1; r > 0; --r)
			cout << "*";
		cout << "\n";
	}

	for (int i = 2; i <= a; ++i)
	{
		for (int k = i; k < a; ++k)
		{
			cout << " ";
		}
		for (int j = 0; j < i; ++j)
		{
			cout << "*";
		}
		for (int r = 0; r < i - 1; ++r)
			cout << "*";
		cout << "\n";
	}


}
