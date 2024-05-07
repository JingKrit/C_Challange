#include <bits/stdc++.h>
using namespace std;

int n, s[30], b[30], mn = INT_MAX, diff;

void compare(int idx, int sumS, int sumB)
{
    if (idx >= n && sumB != 0)
    {
        diff = abs(sumS - sumB);
        if (diff < mn)
        {
            mn = diff;
        }
    }

    if (idx >= n)
    {
        return;
    }

    compare(idx + 1, sumS, sumB);
    compare(idx + 1, sumS * s[idx], sumB + b[idx]);
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &s[i], &b[i]);
    }

    compare(0, 1, 0);
    printf("%d", mn);

    return 0;
}