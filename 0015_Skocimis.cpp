#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, mx;
    scanf("%d %d %d", &a, &b, &c);

    if (b - a > c - b)
    {
        mx = b - a;
    }
    else
    {
        mx = c - b;
    }

    printf("%d", mx - 1);

    return 0;
}