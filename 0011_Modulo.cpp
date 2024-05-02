#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, cnt = 0;
    bool mod[43] = {false};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        r = n % 42;
        if (mod[r] == false)
        {
            mod[r] = true;
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}