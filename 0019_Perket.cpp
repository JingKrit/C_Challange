#include <bits/stdc++.h>
using namespace std;

int n, s[30], b[30], mn = INT_MAX;

void compare(int idx, int sumS, int sumB)
{
    if (idx >= n)
    {
        if (sumS - sumB < mn)
        {
            mn = sumS - sumB;
        }
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

    // compare();
    printf("%d", mn);

    return 0;
}