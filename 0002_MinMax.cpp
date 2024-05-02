#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, mn, mx;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (i == 0)
        {
            mn = x;
            mx = x;
        }
        else
        {
            if (x > mx)
                mx = x;
            if (x < mn)
                mn = x;
        }
    }

    printf("%d\n%d", mn, mx);

    return 0;
}