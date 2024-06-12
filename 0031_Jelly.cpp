#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, cnt = 0;
    scanf("%d %d %d", &a, &b, &c);

    while (a > 1)
    {
        a /= 2;
        cnt++;
    }
    while (b > 1)
    {
        b /= 2;
        cnt++;
    }
    while (c > 1)
    {
        c /= 2;
        cnt++;
    }

    printf("%d", cnt);

    return 0;
}