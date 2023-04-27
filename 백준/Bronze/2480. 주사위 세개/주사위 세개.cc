#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	vector<int> arr;
	arr.reserve(3);
	arr.emplace_back(a);
	arr.emplace_back(b);
	arr.emplace_back(c);
    sort(arr.begin(), arr.end());
    
	if (a == b && b == c && a == c)
	{
		cout << 10000 + (a * 1000);
		return 0;
	}
	else if (a != b && b != c && a != c)
	{
		sort(arr.begin(), arr.end());
		cout << arr[2] * 100;
		return 0;
	}
	else
	{
        sort(arr.begin(), arr.end());
		cout << 1000 + (arr[1] * 100);
	}
}