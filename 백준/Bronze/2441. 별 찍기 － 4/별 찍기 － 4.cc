#include <iostream>

using namespace std;

int main()
{
	int  a = 0;
	cin >> a;
	for (int i = a; i >= 1; --i)
	{
		for (int k = a; k > i; --k)
		{
			cout << " ";
		}
		for (int j = 0; j < i; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
