#include <iostream>

using namespace std;

int main()
{
	int  a = 0;
	cin >> a;
	for (int i = 1; i <= a; ++i)
	{
		for (int k = a; k > i; --k)
		{
			cout << " ";
		}
		for (int j = 0; j < i; ++j)
		{
				cout << "*";
		}
		for(int r = 0; r < i - 1; ++r)
			cout << "*";
		cout << "\n";
	}
}