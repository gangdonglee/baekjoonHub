#include <iostream>
#include <vector>
using namespace std;

int func_Y(int time)
{
	if (30 <= time && 59 >= time)
	{
		return 20;
	}
	else if(29 >= time)
		return 10;
	else if (60 <= time)
	{
		return ((time / 30) + 1) * 10;
	}
}
int func_M(int time)
{
	if (60 <= time && 119 >= time)
	{
		return 30;
	}
	else if (59 >= time)
		return 15;
	else if (119 <= time)
	{
		return  ((time / 60) + 1) * 15;
	}
}

int main()
{
	int count;
	cin >> count;
	int time;
	vector<int> arr;
	arr.reserve(20);

	for (int i = 0; i < count; ++i)
	{
		cin >> time;
		arr.emplace_back(time);
	}
	//영식 요금제 30 -> 10 29 -> 10 
	int size = arr.size();
	int y = 0;
	int m = 0;
	for (int i = 0; i < size; ++i)
	{
		y += func_Y(arr[i]);
		m += func_M(arr[i]);
	}

	if (y < m)
	{
		cout << "Y" << "\n";
		cout << y << "\n";
	}
	else if (y == m)
	{
		cout << "Y M" << "\n";
		cout << y << "\n";
	}
	else
	{
		cout << "M" << "\n";
		cout << m << "\n";
	}

	
}