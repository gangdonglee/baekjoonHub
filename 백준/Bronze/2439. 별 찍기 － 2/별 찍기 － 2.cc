#include <iostream>

using namespace std;

int main()
{
	int  a = 0;
	cin >> a;
	for (int i = 1; i <= a; ++i)
	{
		for (int k = 0; k < a - i; ++k)
			cout << " ";
		for (int j = 0; j < i; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

