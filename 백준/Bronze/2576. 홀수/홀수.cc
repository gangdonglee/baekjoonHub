#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int input = 0;
	vector<int> arr;
	arr.reserve(7);
	for (int i = 0; i < 7; ++i)
	{
		cin >> input;
		if(input % 2 == 1)
			arr.emplace_back(input);
	}
	if (arr.empty())
	{
		cout << -1 << "\n";
		return 0;
	}
	int _max = 0;
	for (size_t i = 0; i < arr.size(); ++i)
	{
		_max += arr[i];
	}
	cout << _max << "\n";
	sort(arr.begin(), arr.end());
	cout << arr[0] << "\n";

}