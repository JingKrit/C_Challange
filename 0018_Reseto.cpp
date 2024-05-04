#include <bits/stdc++.h>
using namespace std;

bool chk[1010] = {false};
int n, k, cnt = 0;

int main()
{
    scanf("%d %d", &n, &k);
    for (int i = 2; i <= n; i++)
    {
        if (chk[i] == false)
        {
            for (int j = i; j <= n; j += i)
            {
                if (chk[j] == false)
                {
                    chk[j] = true;
                    cnt++;
                }

                if (cnt == k)
                {
                    printf("%d", j);
                    return 0;
                }
            }
        }
    }

    return 0;
}