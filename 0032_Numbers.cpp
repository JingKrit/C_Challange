#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0, num[1010];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &num[i]);
    }
    sort(num, num + n);

    while (num[cnt] == 0)
    {
        cnt++;
    }

    if (cnt != 0)
    {
        num[0] = num[cnt];
        num[cnt] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", num[i]);
    }

    return 0;
}