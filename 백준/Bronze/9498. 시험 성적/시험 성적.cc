#include <iostream>
using namespace std;

char Credit(int sc)
{
    if (sc >= 90)
        return 'A';
    else if (sc >= 80)
        return 'B';
    else if (sc >= 70)
        return 'C';
    else if (sc >= 60)
        return 'D';
    else
        return 'F';
}

int main()
{
    int score;
    cin >> score;
    cout << Credit(score);


    return 0;
}