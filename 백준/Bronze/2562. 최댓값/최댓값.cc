#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> arr;
	arr.reserve(10);

	vector<int> arr2;
	arr2.reserve(10);

	int a;
	for (int i = 0; i < 9; ++i)
	{
		cin >> a;
		arr.emplace_back(a);
		arr2.emplace_back(a);
	}

	sort(arr.begin(), arr.end(), greater<>());


	cout << arr[0] << "\n";
	for (int i = 0; i < 9; ++i)
	{
		if (arr[0] == arr2[i])
			cout << i + 1;
	}
}
