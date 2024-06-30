#include <bits/stdc++.h>
using namespace std;

int n, mx, arr[10010], temp;

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        arr[temp]++;
        if (arr[temp] > mx)
        {
            mx = arr[temp];
        }
    }
    for (int i = 0; i < 10001; i++)
    {
        if (arr[i] == mx)
        {
            printf("%d ", i);
        }
    }

    return 0;
}