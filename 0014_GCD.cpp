#include <bits/stdc++.h>
using namespace std;

int a, b, temp;

int main()
{
    scanf("%d %d", &a, &b);
    if (b > a)
    {
        temp = b;
        b = a;
        a = temp;
    }

    while (b > 0)
    {
        temp = b;
        b = a % temp;
        a = temp;
    }

    printf("%d", a);

    return 0;
}