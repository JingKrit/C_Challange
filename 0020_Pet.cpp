#include <bits/stdc++.h>
using namespace std;

int sum[10][10] = {}, temp, mx = 0, num;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            scanf("%d", &temp);
            sum[i][j] = sum[i][j - 1] + temp;

            if (j == 4 && sum[i][j] > mx)
            {
                mx = sum[i][j];
                num = i;
            }
        }
    }

    printf("%d %d", num, mx);

    return 0;
}