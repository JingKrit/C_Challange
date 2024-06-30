#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    int a, b, c, d;
    scanf("%d %d %d", &A, &B, &C);

    for (a = 1; a <= 100; a++)
    {
        if (A % a == 0)
        {
            c = A / a;
            for (b = -100; b <= 100; b++)
            {
                if (C % b == 0)
                {
                    d = C / b;
                    if ((a * d) + (b * c) == B)
                    {
                        printf("%d %d %d %d", a, b, c, d);
                        return 0;
                    }
                }
            }
        }
    }
    printf("No Solution");

    return 0;
}