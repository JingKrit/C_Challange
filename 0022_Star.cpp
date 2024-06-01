#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, col;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        col = n - 1;
    }
    else
    {
        col = n;
    }

    for (int y = 1; y <= n; y++)
    {
        for (int x = 1; x <= col; x++)
        {
            if (n % 2 == 0)
            {
                if (y + x == n / 2 + 1 || x - y == n / 2 - 1 || y - x == n / 2 || y + x == n + n / 2)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }
            }
            else
            {
                if (y - x == n / 2 || x - y == n / 2 || y + x == n / 2 + 2 || y + x == n * 2 - n / 2)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }
            }
        }
        printf("\n");
    }

    return 0;
}