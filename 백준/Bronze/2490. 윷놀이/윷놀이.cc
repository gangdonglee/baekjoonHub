#include <iostream>
#include <string>
using namespace std;

int main()
{
	for (int i = 0; i < 3; ++i)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		string str;
		str = to_string(a);
		str += to_string(b);
		str += to_string(c);
		str += to_string(d);
		int e = 0;
		int f = 0;
		for (size_t i = 0; i < str.size(); ++i)
		{
			if (str[i] == '0')
			{
				//배
				++e;
			}
			else if (str[i] == '1')
			{
				//등
				++f;
			}
		}
		switch (e)
		{
		case 0:
			cout << "E" << "\n";
			break;
		case 1:
			cout << "A" << "\n";
			break;
		case 2:
			cout << "B" << "\n";
			break;
		case 3:
			cout << "C" << "\n";
			break;
		case 4:
			cout << "D" << "\n";
			break;
		default:
			break;
		}
	}
}