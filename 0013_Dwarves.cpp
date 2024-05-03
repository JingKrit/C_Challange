#include <bits/stdc++.h>
using namespace std;

int num[10], sum;

int main()
{
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (num[i] + num[j] == sum - 100)
            {
                num[i] = 0;
                num[j] = 0;
                break;
            }
        }
    }

    for (int i = 0; i < 9; i++)
    {
        if (num[i] == 0)
        {
            continue;
        }
        printf("%d\n", num[i]);
    }

    return 0;
}