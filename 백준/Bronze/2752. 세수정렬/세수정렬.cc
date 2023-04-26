#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int score;
    vector<int> arr;
    arr.reserve(3);
    for (int i = 0; i < 3; ++i)
    {
        cin >> score;
        arr.push_back(score);
    }
   sort(arr.begin(), arr.end());
   for (int i = 0; i < 3; ++i)
       cout << arr[i] << " ";
    return 0;
}