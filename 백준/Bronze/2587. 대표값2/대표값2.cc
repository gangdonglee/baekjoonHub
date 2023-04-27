#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   vector<int> arr;
    for(int i = 0; i < 5; ++i)
    {
        int input;
        cin >> input;
        arr.emplace_back(input);
    }
    sort(arr.begin(), arr.end());
    int result = 0;
    for(size_t i = 0; i < arr.size(); ++i)
    { 
        result += arr[i];
    }
    cout << result / 5 << "\n";
    cout << arr[2] << "\n";
}