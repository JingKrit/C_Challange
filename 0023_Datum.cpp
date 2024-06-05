#include <bits/stdc++.h>
using namespace std;

int main()
{
    string day[7] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int d, m;

    scanf("%d %d", &d, &m);
    for (int i = 0; i < m - 1; i++)
    {
        d += month[i];
    }
    cout << day[d % 7];

    return 0;
}