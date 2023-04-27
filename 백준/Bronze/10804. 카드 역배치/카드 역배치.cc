#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int arr2[20];
int main()
{
	vector<int> arr;
	arr.reserve(20);
	
	for (int i = 0; i < 20; ++i)
		arr2[i] = i + 1;

	int a, b;
	for (int i = 0; i < 10; ++i)
	{
		cin >> a >> b;
		reverse(arr2 + (a -1), arr2 + (b));
	}
	for (int i = 0; i < 20; ++i)
	{
		cout << arr2[i] << " ";
	}
}